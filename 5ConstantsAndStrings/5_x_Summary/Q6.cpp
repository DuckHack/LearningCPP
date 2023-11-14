//
// Created by Andrei Kiryieuski on 14/11/2023.
//

#include <iostream>

// Write the function getQuantityPhrase() here

// Write the function getApplesPluralized() here

constexpr std::string getQuantityPhrase(int q) {
    switch (q) {
        case 0:
            return "no";
        case 1:
            return "a single";
        case 2:
            return "a couple";
        case 3:
            return "a few";
        default:
            return "many";
    }
}

constexpr std::string getApplesPluralized(int q) {
    switch (q) {
        case 1 :
            return "apple";
        default:
            return "apples";
    }
}

void runQ6() {
    std::cout << "Mary has " << getQuantityPhrase(3) << " " << getApplesPluralized(3) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << " " << getApplesPluralized(numApples) << ".\n";

}