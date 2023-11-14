//
// Created by Andrei Kiryieuski on 14/11/2023.
//
#include <iostream>

std::string readPersonsName(int personId) {
    std::string name{};
    std::cout << "Enter the name of person #" << personId << std::endl;
    std::getline(std::cin >> std::ws, name);
    return name;
}

int readPersonsAge(std::string_view name) {
    int age{};
    std::cout << "Enter the age of " << name << std::endl;
    std::cin >> age;
    return age;
}

void runQ5() {
    std::string name1{readPersonsName(1)};
    int age1{readPersonsAge(name1)};

    std::string name2{readPersonsName(2)};
    int age2{readPersonsAge(name2)};

    const std::string olderThan{" is older than "};
    if (age1 > age2) {
        std::cout << name1 << " (age " << age1 << ")" << olderThan << " " << name2 << " (age " << age2 << ")"
                  << std::endl;
    } else if (age2 > age1) {
        std::cout << name2 << " (age " << age2 << ")" << olderThan << " " << name1 << " (age " << age1 << ")"
                  << std::endl;
    } else {
        std::cout << "Same age" << std::endl;
    }
}
