#include "../include/RightHandRuleRobot.h"

RightHandRuleRobot::RightHandRuleRobot() {
    finish = false;
}

void RightHandRuleRobot::move(Maze& labr) {
    // se devi chiamare 1 sola volta inserisci bool per verificare
    // se la funzione è stata chiamata per la prima volta
    x = labr.get_start_X();
    y = labr.get_start_Y();
}