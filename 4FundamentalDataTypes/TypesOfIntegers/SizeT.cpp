//
// Created by Andrei Kiryieuski on 12/11/2023.
//
#include <cstddef> // for std::size_t
#include <iostream>

void printSizeTInfo() {
    //    the largest object creatable on a system has a size (in bytes) equal to the largest value std::size_t can hold
    std::cout << sizeof(std::size_t) << "bytes" << '\n';
}