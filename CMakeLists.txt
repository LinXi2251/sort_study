cmake_minimum_required (VERSION 3.0.0)
project (main VERSION 0.1.0)


include_directories(src)
file(GLOB SRC src/*.cpp)
add_executable(main ${SRC} main.cpp)
