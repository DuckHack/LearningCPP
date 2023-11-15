//
// Created by Andrei Kiryieuski on 15/11/2023.
//
#include <algorithm> // for std::max
#include <cmath>     // for std::abs
#include <iostream>

// Return true if the difference between a and b is within epsilon percent of the larger of a and b
bool approximatelyEqualRel(double a, double b, double relEpsilon) {
    return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

// Return true if the difference between a and b is less than or equal to absEpsilon, or within relEpsilon percent of the larger of a and b
bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon) {
    // Check if the numbers are really close -- needed when comparing numbers near zero.
    if (std::abs(a - b) <= absEpsilon)
        return true;

    // Otherwise fall back to Knuth's algorithm
    return approximatelyEqualRel(a, b, relEpsilon);
}

void relEq() {
    // a is really close to 1.0, but has rounding errors
    constexpr double a{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};

    constexpr double relEps{1e-8};
    constexpr double absEps{1e-12};

    std::cout << "approximatelyEqualRel. compare \"almost 1.0\" to 1.0: ";
    std::cout << std::boolalpha << approximatelyEqualRel(a, 1.0, relEps) << '\n';     // compare "almost 1.0" to 1.0
    std::cout << "approximatelyEqualRel. compare \"almost 0.0\" to 0.0: ";
    std::cout << approximatelyEqualRel(a - 1.0, 0.0, relEps) << '\n'; // compare "almost 0.0" to 0.0

    std::cout << "approximatelyEqualAbsRel. compare \"almost 1.0\" to 1.0: ";
    std::cout << approximatelyEqualAbsRel(a, 1.0, absEps, relEps) << '\n';     // compare "almost 1.0" to 1.0
    std::cout << "approximatelyEqualAbsRel. compare \"almost 0.0\" to 0.0: ";
    std::cout << approximatelyEqualAbsRel(a - 1.0, 0.0, absEps, relEps) << '\n'; // compare "almost 0.0" to 0.0

}