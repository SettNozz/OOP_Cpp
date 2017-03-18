cmake_minimum_required(VERSION 3.6)
project(Lab_1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp PC.cpp PC.h Array_objects.cpp Array_objects.h)
add_executable(Lab_1 ${SOURCE_FILES})