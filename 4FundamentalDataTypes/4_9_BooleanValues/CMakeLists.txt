cmake_minimum_required(VERSION 3.26)
project(BooleanValues)

set(CMAKE_CXX_STANDARD 20)

add_executable(BooleanValues main.cpp
        Printing.cpp
        IntegerToBooleanConversion.cpp
        PrimeChecker.cpp)
