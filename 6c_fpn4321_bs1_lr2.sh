export PYTHONPATH=$PWD
#export CUDA_LAUNCH_BLOCKING=1 
#export CUDA_VISIBLE_DEVICES=1

#TEST='--skip-test'
TEST='--only-test' 



CONFIG_FILE='6c/6c_Fpn4321_bs1_lr5.yaml'


ipython tools/train_net_sparse3d.py -- --config-file "configs/$CONFIG_FILE"  $TEST

