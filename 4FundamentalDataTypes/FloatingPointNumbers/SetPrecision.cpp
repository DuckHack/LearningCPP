//
// Created by Andrei Kiryieuski on 13/11/2023.
//


#include <iomanip> // for output manipulator std::setprecision()
#include <iostream>

//We can override the default precision that std::cout shows by using an output manipulator function named std::setprecision().
//Output manipulators (and input manipulators) are sticky -- meaning if you set them, they will remain set.

void printSetPrecision() {
    std::cout << "Set precision" << "\n";

    std::cout << std::setprecision(17); // show 17 digits of precision
    std::cout << 3.33333333333333333333333333333333333333f << '\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double
}