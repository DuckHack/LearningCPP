//
// Created by Andrei Kiryieuski on 20/11/2023.
//
#include <iostream>

namespace {
    int askForANumber() {
        using namespace std;
        cout << "Please enter a number: ";
        int number{};
        cin >> number;
        return number;
    }

    char askForOp() {
        using namespace std;
        cout << "Please enter an operator: ";
        char op{};
        cin >> op;
        return op;
    }

    void calculate(int a, int b, char op) {
        switch (op) {
            using namespace std;
            case '+':
                cout << a << " + " << b << " = " << a + b;
                break;
            case '-':
                cout << a << " - " << b << " = " << a - b;
                break;
            case '*':
                cout << a << " * " << b << " = " << a * b;
                break;
            case '/':
                cout << a << " / " << b << " = " << a / b;
                break;
            case '%':
                cout << a << " % " << b << " = " << a % b;
                break;
            default:
                cout << "Unknown operand: " << op;
        }
    }
}

namespace Q1 {
    void calculator() {
        int a{askForANumber()};
        int b{askForANumber()};
        char op{askForOp()};
        calculate(a, b, op);
    }
}
