#include "Horse.h"
#include <random>

static std::random_device rd;
static std::mt19937 gen(rd());
static std::bernoulli_distribution dist;

Horse::Horse(int id) : horseID(id), position(0) {}

void Horse::advance() {
    if (dist(gen)) {
        position++;
    }
}

int Horse::getPosition() {
    return position;
}

int Horse::getID() {
    return horseID;
}
