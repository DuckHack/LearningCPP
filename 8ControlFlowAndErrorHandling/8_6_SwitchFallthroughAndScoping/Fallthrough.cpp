//
// Created by Andrei Kiryieuski on 20/11/2023.
//

#include <iostream>

namespace FT {

    void fallthroughEx() {
        switch (2) {
            case 1:
                std::cout << 1 << '\n';
                break;
            case 2:
                std::cout << 2 << '\n'; // Execution begins here
                [[fallthrough]]; // intentional fallthrough -- note the semicolon to indicate the null statement
            case 3:
                std::cout << 3 << '\n'; // This is also executed
                break;
        }
    }
}
