cmake_minimum_required(VERSION 3.6)
project(7_23)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Screen.cpp Screen.h)
add_executable(7_23 ${SOURCE_FILES})