#include "../include/RandomRobot.h"
#include <random>

RandomRobot::RandomRobot() {
    started = false;
}

void RandomRobot::move(Maze& labr) {
    if(!started) {
        x = labr.get_start_X();
        y = labr.get_start_Y();
        started = true;
    }

    std::random_device rd; // Generatore hardware casuale
    std::mt19937 gen(rd()); // Generatore Mersenne Twister
    std::uniform_int_distribution<> distrib(-1, 1); // Intervallo [-1, 1]
    int i = distrib(gen);
    int j = distrib(gen);

    if(labr.direction_free(x + i, y + j)) {
        x = x + i;
        y = y + j;
    }
}

bool RandomRobot::finish(const Maze& labr) {
    if(x == labr.get_exit_X() && y == labr.get_exit_Y()) {
        started = false;
        return true;
    }
    else
        return false;
}