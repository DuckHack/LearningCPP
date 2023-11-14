//
// Created by Andrei Kiryieuski on 13/11/2023.
//

#include <iostream>

int getNumber()
{
    std::cout << "Enter a number: ";
    int y{};
    std::cin >> y;

    return y;
}

void ShowRuntimeConst()
{
    const int x { 3 };           // x is a compile time constant

    const int y { getNumber() }; // y is a runtime constant

    const int z { x + y };       // x + y is a runtime expression, so z is a runtime const

}