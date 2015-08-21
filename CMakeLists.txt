cmake_minimum_required(VERSION 3.2)
project(lookinglass)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_library(lookinglass SHARED lookinglass/glass.cpp)

#set(output_dir ${PROJECT_SOURCE_DIR}/bin)
#set_target_properties(lookinglass PROPERTIES
#    ARCHIVE_OUTPUT_DIRECTORY "${output_dir}"
#    LIBRARY_OUTPUT_DIRECTORY "${output_dir}"
#    RUNTIME_OUTPUT_DIRECTORY "${output_dir}"
#)