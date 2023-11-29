cmake_minimum_required(VERSION 3.26)
project(8_6_SwitchFallthroughAndScoping)

set(CMAKE_CXX_STANDARD 20)

add_executable(8_6_SwitchFallthroughAndScoping main.cpp
        Fallthrough.cpp
        Sequential.h
        Variables.cpp
        Q1.cpp)
