//
// Created by Andrei Kiryieuski on 22/11/2023.
//
#include "Random.h"
#include <iostream>

namespace {
    int readUserGuess(int minMyNumber, int maxMyNumber) {
        int userGuess{-1};
        while (true) {
            std::cin >> userGuess;
            if (std::cin.fail()) {
                std::cin.clear();// put us back in 'normal' operation mode
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove the bad input
                std::cout << "Incorrect input format. The input should be a number in range [" << minMyNumber << ","
                          << maxMyNumber << "]. Please try again: ";
            } else {
                if (userGuess < minMyNumber || userGuess > maxMyNumber) {
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove the bad input
                    std::cout << "The number you guessed " << userGuess << " is out of range [" << minMyNumber << ","
                              << maxMyNumber << "]. Please try again: ";
                } else {
                    break;
                }
            }
        }
        // We may have gotten a partial extraction (e.g. user entered '43x')
        // We'll remove any extraneous input before we proceed
        // so the next extraction doesn't fail
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return userGuess;

    }

    void runRound(int maxTries, int minMyNumber, int maxMyNumber) {
        std::cout
                << "Let's play a game. I'm thinking of a number between " << minMyNumber << " and " << maxMyNumber
                << ". You have 7 tries to guess what it is."
                << std::endl;

        int myNumber{Random::get(minMyNumber, maxMyNumber)};
        for (int tryN{1}; tryN <= maxTries; ++tryN) {
            std::cout << "Guess #" << tryN << ": ";

            int userGuess{readUserGuess(minMyNumber, maxMyNumber)};

            if (myNumber == userGuess) {
                std::cout << "Correct! You win!" << std::endl;
                return;
            } else if (myNumber > userGuess) {
                std::cout << "Your guess is too low." << std::endl;
            } else {
                std::cout << "Your guess is too high." << std::endl;
            }
        }

        std::cout << "Sorry, you lose. The correct number was " << myNumber << "." << std::endl;
    }

    bool readUserWantsPlayMore() {
        char ans{};
        while (true) {
            std::cout << "Would you like to play again (y/n)?";
            std::cin >> ans;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else if (ans == 'y' || ans == 'n') {
                break;
            }
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return (ans == 'y');
    }

    void runGame(int maxTries, int minMyNumber, int maxMyNumber) {
        do {
            runRound(maxTries, minMyNumber, maxMyNumber);
        } while (readUserWantsPlayMore());
        std::cout << "Thank you for playing.";
    }
}

namespace Q3 {
    void runQ3() {
        constexpr int maxTries{7};
        constexpr int minMyNumber{1};
        constexpr int maxMyNumber{100};
        runGame(maxTries, minMyNumber, maxMyNumber);
    }
}