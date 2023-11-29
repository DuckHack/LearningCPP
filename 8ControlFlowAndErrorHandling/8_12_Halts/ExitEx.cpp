//
// Created by Andrei Kiryieuski on 20/11/2023.
//
#include <cstdlib> // for std::exit()
#include <iostream>

namespace {
    void cleanup() {
        // code here to do any kind of cleanup required
        std::cout << "cleanup!\n";
    }
}
namespace EE {
    void exitApp() {
        // register cleanup() to be called automatically when std::exit() is called
        std::atexit(cleanup); // note: we use cleanup rather than cleanup() since we're not making a function call to cleanup() right now

        std::cout << 1 << '\n';

        std::exit(0); // terminate and return status code 0 to operating system

        // The following statements never execute
        std::cout << 2 << '\n';
    }
}
