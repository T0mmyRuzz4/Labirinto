#include "../include/Robot.h"

Robot::Robot() {
    finish = false;
}

void Robot::move(Maze& labr) {
    x = labr.get_start_X();
    y = labr.get_start_Y();
}