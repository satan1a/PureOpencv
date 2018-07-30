cmake_minimum_required(VERSION 2.8)
project(first_window)

LINK_LIBRARIES(opencv_imgcodecs)
LINK_LIBRARIES(opencv_highgui)
LINK_LIBRARIES(opencv_core)
aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})
