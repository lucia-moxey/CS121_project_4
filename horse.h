#ifndef HORSE_H
#define HORSE_H

#include <iostream>

class Horse {
private:
    int position;
    int horseID;

public:
    Horse(int id);
    void advance();
    int getPosition();
    int getID();
};

#endif
