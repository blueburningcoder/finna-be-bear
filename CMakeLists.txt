cmake_minimum_required(VERSION 2.8)
project(finna-be-bear)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")



add_executable(finna-be-bear main.cpp Equation.h Equation.cpp )


set(EXECUTABLE_NAME "Run_finna")

