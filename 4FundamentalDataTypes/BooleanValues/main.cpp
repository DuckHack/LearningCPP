#include "PrimeChecker.h"
#include <iostream>

//#define LECTURE

void printBooleanValues();

void printRealBooleanValues();

void printConversion();

void printPossibleConversion();

int main() {
    using namespace std;
#ifdef LECTURE
    cout << "Printing boolean values" << "\n";
    printBooleanValues();
    cout << "\n" << "Printing real boolean values" << "\n";
    printRealBooleanValues();
    cout << "\n" << "Printing boolean conversion" << "\n";
    printConversion();
    printPossibleConversion();
#endif
#ifndef LECTURE
    cout << "Enter a number from 0 to 9" << "\n";
    int v{0};
    cin >> v;
    if (isPrime(v))
        cout << "The number is prime";
    else
        cout << "The number is not prime";
#endif
    return 0;
}
