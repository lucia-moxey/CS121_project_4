#include "race.h"
#include <iostream>

Race::Race() : horses(NUM_HORSES) {
    for (int i = 0; i < NUM_HORSES; ++i) {
        horses[i] = Horse(i);
    }
}

void Race::runRace() {
    bool gameOver = false;
    while (!gameOver) {
        for (int i = 0; i < 50; ++i) {
            std::cout << std::endl;
        }

        for (auto& horse : horses) {
            horse.advance();
            for (int i = 0; i < horse.getPosition(); ++i) {
                std::cout << ".";
            }
            std::cout << horse.getID();
            for (int i = horse.getPosition() + 1; i < TRACK_LENGTH; ++i) {
                std::cout << ".";
            }
            std::cout << std::endl;
        }

        for (const auto& horse : horses) {
            if (horse.getPosition() >= TRACK_LENGTH - 1) {
                std::cout << "\nHorse " << horse.getID() << " Wins!!\n" << std::endl;
                gameOver = true;
                break;
            }
        }

        if (!gameOver) {
            std::cout << "Press enter for another turn" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
        } else {
            std::cout << "Press enter to exit." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
        }
    }
}
