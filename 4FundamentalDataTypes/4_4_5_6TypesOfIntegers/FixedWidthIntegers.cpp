//
// Created by Andrei Kiryieuski on 12/11/2023.
//
#include <cstdint> // for fixed-width integers
#include <iostream>

void printFixedWidthIntegers() {
    std::cout << "Fixed Width Integers" << '\n';
    std::cout << "fixed signed 8:  " << sizeof(std::int8_t) * 8 << " bits\n";
    std::cout << "fixed unsigned 8:  " << sizeof(std::uint8_t) * 8 << " bits\n";

    std::cout << "fixed signed 16: " << sizeof(std::int16_t) * 8 << " bits\n";
    std::cout << "fixed unsigned 16: " << sizeof(std::uint16_t) * 8 << " bits\n";

    std::cout << "fixed signed 32: " << sizeof(std::int32_t) * 8 << " bits\n";
    std::cout << "fixed unsigned 32: " << sizeof(std::uint32_t) * 8 << " bits\n";

    std::cout << "fixed signed 64: " << sizeof(std::int64_t) * 8 << " bits\n";
    std::cout << "fixed unsigned 64: " << sizeof(std::uint64_t) * 8 << " bits\n";
    std::cout << "\n\n";
}
