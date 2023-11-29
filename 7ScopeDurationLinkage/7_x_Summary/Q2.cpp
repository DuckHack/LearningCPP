//
// Created by Andrei Kiryieuski on 20/11/2023.
//

#include <iostream>
#include "constants.h"

void solveQ2() {
    std::cout << "How many students are in your class? ";
    int students{};
    std::cin >> students;


    if (students > constants::max_class_size)
        std::cout << "There are too many students in this class";
    else
        std::cout << "This class isn't too large";

}