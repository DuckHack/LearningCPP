//
// Created by Andrei Kiryieuski on 13/11/2023.
//
#include <iostream>

int five() {
    return 5;
}

void constExprUsageEx() {
    constexpr double gravity{9.8}; // ok: 9.8 is a constant expression
    constexpr int sum{4 + 5};      // ok: 4 + 5 is a constant expression
    constexpr int something{sum};  // ok: sum is a constant expression

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    constexpr int myAge{age};      // compile error: age is not a constant expression
    constexpr int f{five()};       // compile error: return value of five() is not a constant expression

//    Any variable that should not be modifiable after initialization
//    and whose initializer is known at compile-time should be declared as constexpr.

//    Any variable that should not be modifiable after initialization
//    and whose initializer is not known at compile-time should be declared as const.
}