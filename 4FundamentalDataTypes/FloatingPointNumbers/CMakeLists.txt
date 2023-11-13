cmake_minimum_required(VERSION 3.26)
project(FloatingPointNumbers)

set(CMAKE_CXX_STANDARD 20)

add_executable(FloatingPointNumbers main.cpp
        SetPrecision.cpp
        RoundingError.cpp
        NanAndInf.cpp)
