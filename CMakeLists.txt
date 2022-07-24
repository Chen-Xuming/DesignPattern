cmake_minimum_required(VERSION 3.22)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 17)

include_directories(simple_factory)
include_directories(strategy)

add_executable(DesignPattern main.cpp)