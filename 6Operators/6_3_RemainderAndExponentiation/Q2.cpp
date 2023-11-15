//
// Created by Andrei Kiryieuski on 15/11/2023.
//
#include <cstdint> // for std::int64_t
#include <iostream>

bool isEven(std::int64_t v) {
//    return (v & 1) == 0;
    return v % 2 == 0;
}

std::int64_t inputIntVal() {
    std::cout << "Enter a  integer: ";
    std::int64_t v{};
    std::cin >> v;
    return v;
}

void solveQ2() {
    std::int64_t v{inputIntVal()};
    std::cout << v << (isEven(v) ? " is even." : " is odd.") << std::endl;
}