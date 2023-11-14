//
// Created by Andrei Kiryieuski on 14/11/2023.
//
#include <iostream>

std::string getUserName() {
    std::cout << "Enter your full name" << std::endl;
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

size_t getUserAge() {
    std::cout << "Enter your age" << std::endl;
    int age{};
    std::cin >> age;
    return age;
}

void solveQ1() {
    std::string name{getUserName()};
    size_t age{getUserAge()};
    std::cout << "Your age + length of the name is: " << age + static_cast<int>(name.length()) << std::endl;
//for c++ >= 20
    std::cout << "Your age + length of the name is: " << age + std::ssize(name) << std::endl;
}