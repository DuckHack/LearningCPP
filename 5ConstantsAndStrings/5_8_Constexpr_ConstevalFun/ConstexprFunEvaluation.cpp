//
// Created by Andrei Kiryieuski on 14/11/2023.
//

#include <iostream>

constexpr int greater(int x, int y) {
    return (x > y ? x : y);
}

void evalConstexprFun() {
    constexpr int g{greater(5, 6)};            // case 1: evaluated at compile-time
    std::cout << g << " is greater!\n";

    int x{5}; // not constexpr
    std::cout << greater(x, 6) << " is greater!\n"; // case 2: evaluated at runtime

    std::cout << greater(5, 6) << " is greater!\n"; // case 3: may be evaluated at either runtime or compile-time
}
//A constexpr function that is eligible to be evaluated at compile-time will only be evaluated at compile-time
// if the return value is used where a constant expression is required. Otherwise, compile-time evaluation is not guaranteed.
//Thus, a constexpr function is better thought of as “can be used in a constant expression”, not “will be evaluated at compile-time”.

//Best practice
//Unless you have a specific reason not to, a function that can be made constexpr generally should be made constexpr.