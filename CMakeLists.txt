project(QueueP)
cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 17)

include_directories(prj.thirdparty)

add_subdirectory(prj.thirdparty)
add_subdirectory(prj.lab)
add_subdirectory(prj.contest)