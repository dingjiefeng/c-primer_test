cmake_minimum_required(VERSION 3.6)
project(3_24)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++0x")
set(SOURCE_FILES main.cpp)
add_executable(3_24 ${SOURCE_FILES})