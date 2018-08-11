cmake_minimum_required(VERSION 2.8)

project(roi)

LINK_LIBRARIES(opencv_core)
LINK_LIBRARIES(opencv_aruco)
LINK_LIBRARIES(opencv_imgcodecs)
LINK_LIBRARIES(opencv_highgui)
LINK_LIBRARIES(opencv_imgproc)

add_executable(${PROJECT_NAME} "roi.cpp")

