//
// Created by Andrei Kiryieuski on 15/11/2023.
//

#include <bitset>
#include <iostream>

void runBitsetTest() {
    std::bitset<8> me{0b0000'0101}; // we need 8 bits, start with bit pattern 0000 0101
    std::cout << "initial bit value: " << me << std::endl;

    std::cout << "set bit position 3 to 1 (now we have 0000 1101)" << std::endl;
    me.set(3);   // set bit position 3 to 1 (now we have 0000 1101)
    std::cout << "flip bit 4 (now we have 0001 1101)" << std::endl;
    me.flip(4);  // flip bit 4 (now we have 0001 1101)
    std::cout << "set bit 4 back to 0 (now we have 0000 1101)" << std::endl;
    me.reset(4); // set bit 4 back to 0 (now we have 0000 1101)

    std::cout << "All the bits: " << me << '\n';
    std::cout << "Bit 3 has value: " << me.test(3) << '\n';
    std::cout << "Bit 4 has value: " << me.test(4) << '\n';
}