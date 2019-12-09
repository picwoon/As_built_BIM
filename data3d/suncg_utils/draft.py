    bboxes_two_level = defaultdict(list)
    bboxes_two_level['house'].append(Bbox3D.bbox_from_minmax(house['bbox']))#bboxes_one_level => {'house':house['bbox']}
    for bboxes_level in
    level_two = house['levels'][1]
    #level = house['levels'][1]
    #print(type(house['levels']))
    if 'bbox' not in level_two:
      #continue
      pass
    bboxes_two_level['level'].append(Bbox3D.bbox_from_minmax(level_two['bbox']))#bboxes_one_level => {'level': }.
    #print(bboxes_one_level)
    nodes = level_two['nodes']
    for node in nodes:
      node_type = node['type']
      if node_type == 'Object':
        modelId = node['modelId']
        category = Suncg.modelId_2_class[modelId]
        bboxes_two_level[category].append(Bbox3D.bbox_from_minmax(node['bbox']))
      elif node_type == 'Room':
        if 'bbox' in node:
          bboxes_two_level['room'].append(Bbox3D.bbox_from_minmax(node['bbox']))
        room_bboxes = split_room_parts(house_fn, node['modelId'])
        for c in room_bboxes:
          bboxes_two_level[c] += room_bboxes[c]
      else:
        if 'bbox' in node:
          bboxes_two_level[node_type].append(Bbox3D.bbox_from_minmax(node['bbox']))
    centroid = (np.array(house['bbox']['min']) + np.array(house['bbox']['max']))/2.0
    mesh_frame = open3d.geometry.TriangleMesh.create_coordinate_frame(size = 0.6, origin = centroid)
    for obj in bboxes_two_level:
      if len(bboxes_two_level[obj])>0:
        bboxes_two_level[obj] = np.concatenate([b.reshape([1, 7]) for b in bboxes_two_level[obj]], 0)
      else:
        bboxes_two_level[obj] = np.array(bboxes_two_level[obj]).reshape([-1, 7])
      bboxes_two_level[obj] = cam2world_box(bboxes_two_level[obj])
    for obj in DSET_METAS0.class_2_label:
      if obj == 'background':
          continue
      if obj not in bboxes_two_level:
          bboxes_two_level[obj] = np.array(bboxes_two_level[obj]).reshape([-1, 7])
    level_num = len(house['levels'])
    #temp_house_levels = house['levels']
    #print(temp_house_levels)
    #print(bboxes_one_level)
    if level_num == 1 and not Debug:
      bboxes_two_level['wall'] = preprocess_walls(bboxes_two_level['wall'])
      bboxes_two_level['window'] = preprocess_windows(bboxes_two_level['window'], bboxes_two_level['wall'])
      bboxes_two_level['door'] = preprocess_doors(bboxes_two_level['door'], bboxes_two_level['wall'])
      bboxes_two_level['ceiling_raw']  = bboxes_two_level['ceiling'].copy()
      bboxes_two_level['floor_raw'] = bboxes_two_level['floor'].copy()
      bboxes_two_level['ceiling'] = preprocess_cfr(bboxes_two_level['ceiling'], bboxes_two_level['wall'], 'ceiling')
      bboxes_two_level['floor'] = preprocess_cfr(bboxes_two_level['floor'], bboxes_two_level['wall'], 'floor')
    if level_num == 2 and Debug:
      bboxes_two_level['wall'] = preprocess_walls(bboxes_two_level['wall'])
      pass
    #print(type(bboxes_one_level['wall']))
    # save bbox in ply and txt
    object_bbox_dir = os.path.join(parsed_dir, 'object_bbox')
    if not os.path.exists(object_bbox_dir):
      os.makedirs(object_bbox_dir)
    bboxes_num = {}
    for category in bboxes_two_level.keys():
      bboxes_num[category] = len(bboxes_two_level[category])
      boxes_fn = os.path.join(object_bbox_dir, category+'.txt')
      boxes = np.array(bboxes_two_level[category])
      np.savetxt(boxes_fn, boxes)
    #######################
    print(f'parsed_dir: {parsed_dir}')
    write_summary(parsed_dir, 'level_num', level_num, 'a')
    for obj in ['room', 'wall', 'window', 'door', 'floor', 'ceiling']:
        write_summary(parsed_dir, f'{obj}_num', bboxes_num[obj], 'a')
    #######################
    save_ply = False
    if save_ply:
      for category in bboxes_two_level.keys():
        for i,bbox in enumerate(bboxes_two_level[category]):
          box_dir = os.path.join(object_bbox_dir,'{}'.format(category))
          if not os.path.exists(box_dir):
            os.makedirs(box_dir)
          box_fn = os.path.join(box_dir, '%d.ply'%(i))
          bbox_cam = world2cam_box(bbox.reshape([1,7]))[0]
          Bbox3D.draw_bbox_open3d(bbox_cam, 'Y', plyfn=box_fn)