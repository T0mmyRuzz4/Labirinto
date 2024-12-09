#include "../include/Robot.h"

Robot::Robot() {
    started = false;
}

void Robot::move(Maze& labr) {}

bool Robot::finish(Maze& labr) const {
    if(x == labr.get_exit_X() && y == labr.get_exit_Y())
        return true;
    else
        return false;
}