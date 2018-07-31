cmake_minimum_required(VERSION 2.8)

project(write_video)

LINK_LIBRARIES(opencv_imgproc)
LINK_LIBRARIES(opencv_highgui)
LINK_LIBRARIES(opencv_core)
LINK_LIBRARIES(opencv_video)
LINK_LIBRARIES(opencv_videoio)

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})

