cmake_minimum_required(VERSION 3.26)
project(6_6_FloatingPointComparisons)

set(CMAKE_CXX_STANDARD 20)

add_executable(6_6_FloatingPointComparisons main.cpp
        ConstExprRelEq.h
        RelEq.cpp)
