cmake_minimum_required(VERSION 3.6)
project(7_3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Sales_data.cpp Sales_data.h)
add_executable(7_3 ${SOURCE_FILES})