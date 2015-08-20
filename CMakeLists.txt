cmake_minimum_required(VERSION 3.2)
project(lookinglass)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_library(lookinglass SHARED ${SOURCE_FILES} glass.cpp)
