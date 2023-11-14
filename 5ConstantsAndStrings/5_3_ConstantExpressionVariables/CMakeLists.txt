cmake_minimum_required(VERSION 3.26)
project(ConstantExpression)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConstantExpression main.cpp
        ConstExpressionUsage.cpp)
