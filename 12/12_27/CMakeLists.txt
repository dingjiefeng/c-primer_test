cmake_minimum_required(VERSION 3.6)
project(12_27)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp TextQuery.cpp TextQuery.h)
add_executable(12_27 ${SOURCE_FILES})