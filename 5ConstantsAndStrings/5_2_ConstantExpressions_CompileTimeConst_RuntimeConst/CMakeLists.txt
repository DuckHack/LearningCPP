cmake_minimum_required(VERSION 3.26)
project(ConstantExpressions_Compile_timeConst_RuntimeConst)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConstantExpressions_Compile_timeConst_RuntimeConst main.cpp
        CompileTimeConst.cpp
        RunTimeConst.cpp)
