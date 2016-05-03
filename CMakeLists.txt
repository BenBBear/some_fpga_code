cmake_minimum_required(VERSION 3.3)
project(caffe_convertor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp config.h caffe_reader/main.cpp caffe_reader/caffe_reader.cpp caffe_reader/caffe_reader.h)
add_executable(caffe_convertor ${SOURCE_FILES})