#include <cstdint>
#include <iostream>

void runQ1();

bool testBit(std::uint8_t flags, std::uint8_t mask) {
    return (flags & mask);
}

std::uint8_t setBit(std::uint8_t flags, std::uint8_t mask) {
    flags |= mask; // turn on bit
    return flags;
}

std::uint8_t resetBit(std::uint8_t flags, std::uint8_t mask) {
    flags &= ~mask; // turn off bit 2
    return flags;
}


std::uint8_t flipBit(std::uint8_t flags, std::uint8_t mask) {
    flags ^= mask;
    return flags;
}

void runBitOperations() {
    [[maybe_unused]] constexpr std::uint8_t mask0{0b0000'0001}; // represents bit 0
    [[maybe_unused]] constexpr std::uint8_t mask1{0b0000'0010}; // represents bit 1
    [[maybe_unused]] constexpr std::uint8_t mask2{0b0000'0100}; // represents bit 2
    [[maybe_unused]] constexpr std::uint8_t mask3{0b0000'1000}; // represents bit 3
    [[maybe_unused]] constexpr std::uint8_t mask4{0b0001'0000}; // represents bit 4
    [[maybe_unused]] constexpr std::uint8_t mask5{0b0010'0000}; // represents bit 5
    [[maybe_unused]] constexpr std::uint8_t mask6{0b0100'0000}; // represents bit 6
    [[maybe_unused]] constexpr std::uint8_t mask7{0b1000'0000}; // represents bit 7

    std::cout << "testing bits" << std::endl;
    std::uint8_t flags{0b0000'0101}; // 8 bits in size means room for 8 flags
    std::cout << "bit 0 is " << (testBit(flags, mask0) ? "on\n" : "off\n");
    std::cout << "bit 1 is " << (testBit(flags, mask1) ? "on\n" : "off\n");
    std::cout << "\n";

    std::cout << "Setting bits" << std::endl;
    std::cout << "bit 1 is " << (testBit(flags, mask1) ? "on\n" : "off\n");
    flags = setBit(flags, mask1);
    std::cout << "bit 1 is " << (testBit(flags, mask1) ? "on\n" : "off\n");
    flags = 0b0000'0101;
    std::cout << "\n";

    std::cout << "Resetting bits" << std::endl;
    std::cout << "bit 2 is " << (testBit(flags, mask2) ? "on\n" : "off\n");
    flags = resetBit(flags, mask2);
    std::cout << "bit 2 is " << (testBit(flags, mask2) ? "on\n" : "off\n");
    flags = 0b0000'0101;
    std::cout << "\n";

    std::cout << "Flipping bits" << std::endl;
    std::cout << "bit 2 is " << (testBit(flags, mask2) ? "on\n" : "off\n");
    flags = flipBit(flags, mask2);
    std::cout << "bit 2 is " << (testBit(flags, mask2) ? "on\n" : "off\n");
    flags = flipBit(flags, mask2);
    std::cout << "bit 2 is " << (testBit(flags, mask2) ? "on\n" : "off\n");
    flags = 0b0000'0101;
    std::cout << "\n";
}

int main() {
//    runBitOperations();
    runQ1();
    return 0;
}

//https://www.learncpp.com/cpp-tutorial/bit-manipulation-with-bitwise-operators-and-bit-masks/