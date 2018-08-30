#!/bin/bash

UP_PATH=/home/updownimg/上部
DOWN_PATH=
MID_PATH=/home/updownimg/中部

#for i in [ 0 1 2 3 4 5 6 7 ]
#do
#        ./uvimg -cut ${UP_PATH}/result_${i}.jpg ${UP_PATH}/result_640480_${i}.jpg
#        ./uvimg -cut ${MID_PATH}/result_${i}.jpg ${MID_PATH}result_640480_${i}.jpg

#done

for i in [ 0 1 2 3 4 5 6 7 ]
do
	./uvimg -deal ${UP_PATH}/camera_1_point3d_uv_${i}.xyz ${UP_PATH}/camera_1_point3d_rgb_${i}.ply ${UP_PATH}/result_${i}.jpg
	./uvimg -deal ${MID_PATH}/camera_2_point3d_uv_${i}.xyz ${MID_PATH}/camera_2_point3d_rgb_${i}.ply ${MID_PATH}/result_${i}.jpg
done

