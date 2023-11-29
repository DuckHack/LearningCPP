//
// Created by Andrei Kiryieuski on 22/11/2023.
//
#include "Constants.h"
#include <iostream>
#include <limits> // for std::numeric_limits

namespace {
    double calculateHeight(double initialHeight, int seconds) {
        double distanceFallen{myConstants::gravity * seconds * seconds / 2};
        double heightNow{initialHeight - distanceFallen};

        // Check whether we've gone under the ground
        // If so, set the height to ground-level
        if (heightNow < 0.0)
            return 0.0;
        else
            return heightNow;
    }

    void calculateAndPrintHeight(double initialHeight, int maxSimulationLen) {
        for (int i = 0; i <= maxSimulationLen; ++i) {
            double h{calculateHeight(initialHeight, i)};
            if (h > 0) {
                std::cout << "At " << i << " seconds, the ball is at height: " << h << '\n';
            } else {
                std::cout << "At " << i << " seconds, the ball is at the ground. Stopping simulation.";
                break;
            }
        }
    }

    void ignoreLine() {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }


    double getHeight() {
        while (true) {
            std::cout << "Enter the initial height of the tower in meters: ";
            double initialHeight{};
            std::cin >> initialHeight;

            if (std::cin) {
                ignoreLine();
                return initialHeight;
            } else {
                if (std::cin.eof()) // if the stream was closed
                {
                    exit(1); // shut down the program now
                }
                std::cin.clear(); // put us back in 'normal' operation mode
                ignoreLine();
            }

        }
    }

    int getMaxSimTime() {
        while (true) {
            std::cout << "Enter max simulation len in seconds: ";
            int maxSimulationLen{};
            std::cin >> maxSimulationLen;
            if (std::cin) {
                ignoreLine();
                return maxSimulationLen;
            } else {
                if (std::cin.eof()) {
                    exit(1);
                }
                std::cin.clear();
                ignoreLine();
            }
        }
    }
}


namespace Q1 {
    void solveQ1() {
        double initialHeight{getHeight()};
        int maxSimulationLen{getMaxSimTime()};
        calculateAndPrintHeight(initialHeight, maxSimulationLen);
    }
}
