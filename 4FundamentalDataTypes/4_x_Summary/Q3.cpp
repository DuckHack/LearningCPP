//
// Created by Andrei Kiryieuski on 13/11/2023.
//
#include<iostream>

double askForInput() {
    std::cout << "Provide the height of the tower" << std::endl;
    double h{};
    std::cin >> h;
    return h;
}

void outputHeight(double h, int s) {
    if (h > 0)
        std::cout << "The height of the ball is " << h << " on the " << s << " second" << std::endl;
    else
        std::cout << "The ball is on the ground." << std::endl;
}

void startQ3() {
    double h{askForInput()};
    for (int i = 0; i < 6; i++) {
        double ballH{h - (9.8 * i * i) / 2};
        outputHeight(ballH, i);
    }
}
