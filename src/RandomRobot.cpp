#include "../include/RandomRobot.h"
#include <cstdlib>

RandomRobot::RandomRobot() {
    started = false;
}

void RandomRobot::move(Maze& labr) {
    if(!started) {
        x = labr.get_start_X();
        y = labr.get_start_Y();
        started = true;
    }

    int i = rand() % 2 - 1;
    int j = rand() % 2 - 1;
    
    if(labr.direction_free(x + i, y + j)) {
        x = x + i;
        y = y + j;
    }
}