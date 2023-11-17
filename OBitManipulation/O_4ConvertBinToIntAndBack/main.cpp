#include <iostream>

std::uint16_t inputVal() {
    std::uint16_t v{};
    std::cin >> v;
    return v;
}

void solveQ5(std::uint16_t v) {
    if (v == 1) {
        std::cout << "1";
        return;
    }
    if (v == 0) {
        std::cout << "0";
        return;
    }
    solveQ5(v / 2);
    std::cout << std::to_string(v % 2);
}

int main() {
    std::uint16_t v{inputVal()};
    solveQ5(v);
    return 0;
}
