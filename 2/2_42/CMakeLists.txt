cmake_minimum_required(VERSION 3.6)
project(test_c__11)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++0x")

set(SOURCE_FILES main.cpp Sales_data.h)
add_executable(test_c__11 ${SOURCE_FILES})