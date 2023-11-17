#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits, int shift) {
    std::bitset<4> shifted{0b0};
    for (int i = 0; i < bits.size(); i++) {
        if (bits.test(i))
            shifted.set((i + shift) % bits.size());
    }
    return shifted;
}

void doRotlUsingBitsMethods(std::bitset<4> bits) {
    for (int i = 0; i < 5; ++i) {
        std::cout << rotl(bits, i) << '\n';
    }
}

void rotlBitwiseOperations(std::bitset<4> bits) {
    std::bitset<4> lastBit = bits >> (bits.size() - 1);
    bits <<= 1;
    bits |= lastBit;
    std::cout << bits << '\n';

}


int main() {
    std::bitset<4> bits1{0b0001};
    std::bitset<4> bits2{0b1001};
//    doRotlUsingBitsMethods(bits1);
//    doRotlUsingBitsMethods(bits2);

    rotlBitwiseOperations(bits1);
    rotlBitwiseOperations(bits2);
    return 0;
}