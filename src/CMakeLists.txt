cmake_minimum_required(VERSION 2.8)

project(src)

add_subdirectory(img_rotate)
add_subdirectory(flann_feature)
add_subdirectory(roi)
add_subdirectory(opt_mat)
add_subdirectory(image_smooth)
add_subdirectory(first_window)
add_subdirectory(first_video)
add_subdirectory(write_video)
add_subdirectory(sift)


aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})
