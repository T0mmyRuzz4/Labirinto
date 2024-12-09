#include "../include/RightHandRuleRobot.h"

RightHandRuleRobot::RightHandRuleRobot() {
    started = false;
}

void RightHandRuleRobot::move(Maze& labr) {
    if(!started) {
        x = labr.get_start_X();
        y = labr.get_start_Y();
        started = true;

        while(labr.free_right(x)) {
            x++;
        }
    }

    
}