//
// Created by Andrei Kiryieuski on 13/11/2023.
//

#include <iostream>

void printCompileTimeConst() {
    const int x{3};  // x is a compile-time const
    const int y{4};  // y is a compile-time const

    const int z{x + y}; // x + y is a constant expression, so z is compile-time const

    std::cout << z << '\n';
}