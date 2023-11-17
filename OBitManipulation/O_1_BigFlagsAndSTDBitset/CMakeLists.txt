cmake_minimum_required(VERSION 3.26)
project(BigFlagsAndSTDBitset)

set(CMAKE_CXX_STANDARD 20)

add_executable(BigFlagsAndSTDBitset main.cpp
        BitsetEx.cpp
        BitsNamingEx.cpp)
