#include <iostream>

void printSetPrecision();

void printRoundingError();

void printNanAndInf();

int main() {
    using namespace std;
    printSetPrecision();
    cout << "\n";
    printRoundingError();
    cout << "\n";
    printNanAndInf();
    return 0;
}

//https://www.learncpp.com/cpp-tutorial/floating-point-numbers/

//Favor double over float unless space is at a premium, as the lack of precision in a float will often lead to inaccuracies.
