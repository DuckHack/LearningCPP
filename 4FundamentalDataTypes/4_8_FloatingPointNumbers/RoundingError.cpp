#include <iomanip> // for std::setprecision()
#include <iostream>

void printRoundingError() {
    std::cout << "Rounding error" << "\n";
    std::cout << std::setprecision(17);

    double d1{1.0};
    std::cout << "Expected -> " << d1 << '\n';

    double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1}; // should equal 1.0
    std::cout << "Got -> " << d2 << '\n';
}