#!/bin/bash
cd ../ && make
cd sift && ./sift ../../../cloudpoints/mainpano.jpg ../../../cloudpoints/camera_0_point3d_$1.jpg

