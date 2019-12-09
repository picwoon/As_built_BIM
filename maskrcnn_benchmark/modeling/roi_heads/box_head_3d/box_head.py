# Copyright (c) Facebook, Inc. and its affiliates. All Rights Reserved.
import torch
from torch import nn

from .roi_box_feature_extractors import make_roi_box_feature_extractor
from .roi_box_predictors import make_roi_box_predictor
from .inference import make_roi_box_post_processor
from .loss import make_roi_box_loss_evaluator

DEBUG = True
SHOW_ROI_INPUT = DEBUG and False
SHOW_PRO_NUMS = DEBUG and False

def rm_gt_from_proposals_(class_logits, box_regression, proposals, targets):
    class_logits = class_logits.clone().detach()
    box_regression = box_regression.clone().detach()

    batch_size = len(proposals)
    proposals_ = []
    notgt_mask_all = []
    for b in range(batch_size):
        #print(f's:{s}')
        is_gt = proposals[b].get_field('is_gt')
        notgt_mask = is_gt == 0
        notgt_mask_all.append(notgt_mask)
        notgt_ids = torch.nonzero(notgt_mask).squeeze(1)

        proposals_.append(proposals[b][notgt_ids])
    notgt_mask_all = torch.cat(notgt_mask_all, 0)
    class_logits_ = class_logits[notgt_mask_all]
    box_regression_ = box_regression[notgt_mask_all]

    return class_logits_, box_regression_, proposals_

class ROIBoxHead3D(torch.nn.Module):
    """
    Generic Box Head class.
    """

    def __init__(self, cfg):
        super(ROIBoxHead3D, self).__init__()
        self.feature_extractor = make_roi_box_feature_extractor(cfg)
        self.predictor = make_roi_box_predictor(cfg)
        self.post_processor_ = make_roi_box_post_processor(cfg)
        self.loss_evaluator, self.seperate_classifier = make_roi_box_loss_evaluator(cfg)
        self.need_seperate = self.seperate_classifier.need_seperate
        self.eval_in_train = cfg.DEBUG.eval_in_train
        self.add_gt_proposals = cfg.MODEL.RPN.ADD_GT_PROPOSALS
        self.detections_per_img = cfg.MODEL.ROI_HEADS.DETECTIONS_PER_IMG

    def post_processor(self, log_reg, proposals):
        class_logits, box_regression = log_reg
        if not self.need_seperate:
          proposals = self.post_processor_((class_logits, box_regression), proposals)
        else:
          proposals = self.seperate_classifier.post_processor(class_logits, box_regression, proposals, self.post_processor_)
        return proposals

    #def rm_gt_from_proposals(self,
    #                  class_logits, box_regression, proposals, targets):
    #    if not self.need_seperate:
    #        #class_logits_, box_regression_, proposals_ =
    #        return rm_gt_from_proposals_(
    #                class_logits, box_regression, proposals, targets)
    #    else:
    #        #class_logits_, box_regression_, proposals_ =
    #        return self.seperate_classifier.rm_gt_from_proposals_seperated( rm_gt_from_proposals_,
    #                class_logits, box_regression, proposals, targets)

    def forward(self, features, proposals, targets=None):
        """
        Arguments:
            features (list[Tensor]): feature-maps from possibly several levels
            proposals (list[BoxList]): proposal boxes
            targets (list[BoxList], optional): the ground-truth targets.

        Returns:
            x (Tensor): the result of the feature extractor
            proposals (list[BoxList]): during training, the subsampled proposals
                are returned. During testing, the predicted boxlists are returned
            losses (dict[Tensor]): During training, returns the losses for the
                head. During testing, returns an empty dict.
        """

        proposals = proposals.seperate_examples()
        if SHOW_ROI_INPUT and False:
          fgt = cfg.MODEL.ROI_HEADS.FG_IOU_THRESHOLD
          bgt = cfg.MODEL.ROI_HEADS.BG_IOU_THRESHOLD
          print(f"proposals over FG_IOU_THRESHOLD: {fgt}")
          proposals[0].show_by_objectness(fgt, targets[0])
          print(f"proposals below BG_IOU_THRESHOLD: {bgt}")
          proposals[0].show_by_objectness(bgt, targets[0], below=True)
          import pdb; pdb.set_trace()  # XXX BREAKPOINT
          pass
        if SHOW_PRO_NUMS:
          print(f'\n\nRPN out proposals num: {len(proposals[0])}')

        if self.training:
            # Faster R-CNN subsamples during training the proposals with a fixed
            # positive / negative ratio
            with torch.no_grad():
                proposals = self.loss_evaluator.subsample(proposals, targets)
            if SHOW_PRO_NUMS:
                print(f'Train subsample proposals num: {len(proposals[0])}')

        # extract features that will be fed to the final classifier. The
        # feature_extractor generally corresponds to the pooler + heads
        x = self.feature_extractor(features, proposals)
        # final classifier that converts the features into predictions
        class_logits, box_regression, bbox_connects = self.predictor(x)

        if not self.training:
            result = self.post_processor((class_logits, box_regression), proposals)
            if SHOW_PRO_NUMS:
                print(f'Test post proposals num: {len(result[0])}')
            return x, result, {}

        if self.eval_in_train > 0:
            if self.add_gt_proposals:
                class_logits_, box_regression_, proposals_ = rm_gt_from_proposals_(
                    class_logits, box_regression, proposals, targets)
                if SHOW_PRO_NUMS:
                  print(f'Eval in train rm gt proposals num: {len(proposals_[0])}')
            proposals = self.post_processor((class_logits_, box_regression_), proposals_)
            if SHOW_PRO_NUMS:
                  print(f'Eval in train post proposals num: {len(proposals[0])}\n\n')

        loss_classifier, loss_box_reg = self.loss_evaluator(
            [class_logits], [box_regression], targets=targets
        )
        if DEBUG and False:
          print(f"\nloss_classifier_roi:{loss_classifier} \nloss_box_reg_roi: {loss_box_reg}")
          batch_size = len(proposals)
          proposals[0].show_by_objectness(0.5, targets[0])
          import pdb; pdb.set_trace()  # XXX BREAKPOINT
          pass
        if not self.need_seperate:
          roi_loss = {"loss_classifier_roi":loss_classifier, "loss_box_reg_roi":loss_box_reg}
        else:
          roi_loss = {}
          gn = len(loss_classifier)
          for gi in range(gn):
            roi_loss[f"loss_classifier_roi_{gi}"] = loss_classifier[gi]
            roi_loss[f"loss_box_reg_roi_{gi}"] = loss_box_reg[gi]
        return (
            x,
            proposals,
            roi_loss,
        )


def build_roi_box_head(cfg):
    """
    Constructs a new box head.
    By default, uses ROIBoxHead3D, but if it turns out not to be enough, just register a new class
    and make it a parameter in the config
    """
    return ROIBoxHead3D(cfg)
