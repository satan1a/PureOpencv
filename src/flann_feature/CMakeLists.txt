cmake_minimum_required(VERSION 2.8)

project(flann_feature)

LINK_LIBRARIES(opencv_core)
LINK_LIBRARIES(opencv_aruco)
LINK_LIBRARIES(opencv_imgcodecs)
LINK_LIBRARIES(opencv_highgui)
LINK_LIBRARIES(opencv_imgproc)
LINK_LIBRARIES(opencv_xfeatures2d)
LINK_LIBRARIES(opencv_features2d)
LINK_LIBRARIES(opencv_flann)
LINK_LIBRARIES(opencv_calib3d)

add_executable(${PROJECT_NAME} "hmc.cpp")

