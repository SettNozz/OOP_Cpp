cmake_minimum_required(VERSION 3.6)
project(Lab_1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp public_transport.cpp)
set(HEADER public_transport.h)
add_executable(Lab_1 ${SOURCE_FILES})