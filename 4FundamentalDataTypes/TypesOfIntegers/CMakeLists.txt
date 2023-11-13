cmake_minimum_required(VERSION 3.26)
project(FundametalDataTypes)

set(CMAKE_CXX_STANDARD 20)

add_executable(FundametalDataTypes main.cpp
        FastAndLeastIntegers.cpp
        FixedWidthIntegers.cpp
        SizeT.cpp)
