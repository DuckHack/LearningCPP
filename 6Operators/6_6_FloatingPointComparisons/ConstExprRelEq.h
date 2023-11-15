//
// Created by Andrei Kiryieuski on 15/11/2023.
//

#ifndef INC_6_6_FLOATINGPOINTCOMPARISONS_CONSTEXPRRELEQ_H
#define INC_6_6_FLOATINGPOINTCOMPARISONS_CONSTEXPRRELEQ_H
// Prior to C++23 version
#include <algorithm> // for std::max
#include <iostream>

// Our own constexpr implementation of std::abs (for use prior to C++23)
// In C++23, use std::abs
// constAbs() can be called like a normal function, but can handle different types of values (e.g. int, double, etc...)
template<typename T>
constexpr T constAbs(T x) {
    return (x < 0 ? -x : x);
}

// Return true if the difference between a and b is within epsilon percent of the larger of a and b
constexpr bool approximatelyEqualRel(double a, double b, double relEpsilon) {
    return (constAbs(a - b) <= (std::max(constAbs(a), constAbs(b)) * relEpsilon));
}

// Return true if the difference between a and b is less than or equal to absEpsilon, or within relEpsilon percent of the larger of a and b
constexpr bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon) {
    // Check if the numbers are really close -- needed when comparing numbers near zero.
    if (constAbs(a - b) <= absEpsilon)
        return true;

    // Otherwise fall back to Knuth's algorithm
    return approximatelyEqualRel(a, b, relEpsilon);
}

void constExprRelEq() {
    // a is really close to 1.0, but has rounding errors
    constexpr double a{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};

    constexpr double relEps{1e-8};
    constexpr double absEps{1e-12};

    constexpr bool same{approximatelyEqualAbsRel(a, 1.0, absEps, relEps)};
    std::cout << same << '\n';

}

#endif //INC_6_6_FLOATINGPOINTCOMPARISONS_CONSTEXPRRELEQ_H
