//
// Created by Andrei Kiryieuski on 13/11/2023.
//
#include <iostream>

char getUserCharInput() {
    std::cout << "Provide any char: ";
    char c{};
    std::cin >> c;
    return c;
}

void printAsChar(char c) {
    std::cout << "Provided char - " << c << std::endl;
}

void printAsInt(int c) {
    std::cout << "Provided char as int - " << c << std::endl;
}

void runQ1() {
    std::int8_t c{getUserCharInput()};
    printAsChar(c);
    printAsInt(c);
}