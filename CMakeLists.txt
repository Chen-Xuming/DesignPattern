cmake_minimum_required(VERSION 3.22)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 17)

include_directories(simple_factory)

#add_executable(DesignPattern main.cpp simple_factory/Operation.h simple_factory/OperationFactory.h simple_factory/simple_factory_test.h)
add_executable(DesignPattern main.cpp)