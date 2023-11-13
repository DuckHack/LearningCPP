//
// Created by Andrei Kiryieuski on 13/11/2023.
//
#include <iostream>

double readFNumber() {
    double x{};
    std::cin >> x;
    return x;
}

char readOperation() {
    char c{};
    std::cin >> c;
    return c;
}

void printResult(double r) {
    std::cout << "Result = " << r << std::endl;
}

void solveQ2() {
    double a{readFNumber()};
    double b{readFNumber()};
    if (b == 0) {
        std::cout << "By ZERO division detected" << std::endl;
        return;
    }

    char c{readOperation()};
    if (c == '+')
        printResult(a + b);
    else if (c == '-')
        printResult(a - b);
    else if (c == '*')
        printResult(a * b);
    else if (c == '/')
        printResult(a / b);
    else
        std::cout << "Provided incorrect operator" << std::endl;
}
