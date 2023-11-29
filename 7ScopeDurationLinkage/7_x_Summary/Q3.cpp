//
// Created by Andrei Kiryieuski on 20/11/2023.
//
#include <iostream>
#include <cassert>

namespace {
//    Downsides:
//  1. Cant run more than one instance of the accumulator
//  2. No way to reset
    int accumulate(int v) {
        assert(v > 0);
        static int accum{0};
        accum += v;
        return accum;
    }
}

namespace Q3 {
    void solveQ3() {
        std::cout << accumulate(4) << '\n'; // prints 4
        std::cout << accumulate(3) << '\n'; // prints 7
        std::cout << accumulate(2) << '\n'; // prints 9
        std::cout << accumulate(1) << '\n'; // prints 10
    }
}
