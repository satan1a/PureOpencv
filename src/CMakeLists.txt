cmake_minimum_required(VERSION 2.8)

project(src)

add_subdirectory(image_smooth)
add_subdirectory(first_window)
add_subdirectory(first_video)
add_subdirectory(write_video)


add_executable(${PROJECT_NAME} "main.cpp")

