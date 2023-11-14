//
// Created by Andrei Kiryieuski on 13/11/2023.
//

#include <iostream>

void printConversion() {
    bool bFalse{0}; // okay: initialized to false
    bool bTrue{1}; // okay: initialized to true
    std::cout << "Cant explicitly convert any number but 0 and 1 to boolean. Compilation error.";
//    bool bNo{2}; // error: narrowing conversions disallowed

    std::cout << bFalse << bTrue << '\n';
}

void printPossibleConversion() {
    std::cout << std::boolalpha; // print bools as true or false

    bool b1 = 4; // copy initialization allows implicit conversion from int to bool
    std::cout << b1 << '\n';

    bool b2 = 0; // copy initialization allows implicit conversion from int to bool
    std::cout << b2 << '\n';
//    However, in any context where an integer can be converted to a Boolean,
//    the integer 0 is converted to false, and any other integer is converted to true.

}