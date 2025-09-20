#ifndef RACE_H
#define RACE_H

#include <vector>
#include "Horse.h"

class Race {
private:
    const static int NUM_HORSES = 5;
    const int TRACK_LENGTH = 15;
    std::vector<Horse> horses;
    
public:
    Race();
    void runRace();
    void printTrack();
    bool isWinner();
};

#endif
