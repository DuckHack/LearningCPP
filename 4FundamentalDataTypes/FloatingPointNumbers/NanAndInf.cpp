#include <iostream>

void printNanAndInf() {
    std::cout << "Nan and Inf" << "\n";

    double zero{0.0};
    double posinf{5.0 / zero}; // positive infinity
    std::cout << posinf << " <- positive infinity" << '\n';

    double neginf{-5.0 / zero}; // negative infinity
    std::cout << neginf << " <- negative infinity" << '\n';

    double nan{zero / zero}; // not a number (mathematically invalid)
    std::cout << nan << " <- not a number (mathematically invalid)" << '\n';

}