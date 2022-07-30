cmake_minimum_required(VERSION 3.0.0)
project(AA VERSION 0.1.0)

include_directories(src)
aux_source_directory(src SRC_LIST)
add_executable(AA ${SRC_LIST} main.cpp)