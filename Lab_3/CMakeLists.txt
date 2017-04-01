cmake_minimum_required(VERSION 3.6)
project(Lab_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Computer.cpp Computer.h Server.cpp Server.h Personal_comp.cpp Personal_comp.h)
add_executable(Lab_3 ${SOURCE_FILES})