#include <iostream>

int printFastAndLeast() {
    std::cout << "Fast and Least" << '\n';
    std::cout << "Fast" << '\n';

//    provide the smallest signed/unsigned integer type with a width of at least # bits
    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 8:  " << sizeof(std::uint_least8_t) * 8 << " bits\n";

    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::uint_least16_t) * 8 << " bits\n";

    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::uint_least32_t) * 8 << " bits\n";
    std::cout << '\n';

    std::cout << "Least" << '\n';
//    provide the fastest signed/unsigned integer type with a width of at least # bits
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 8:  " << sizeof(std::uint_fast8_t) * 8 << " bits\n";

    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::uint_fast16_t) * 8 << " bits\n";

    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::uint_fast32_t) * 8 << " bits\n";
    std::cout << "\n\n";

    return 0;
}