#include "../include/RandomRobot.h"

RandomRobot::RandomRobot() {
    finish = false;
}

void RandomRobot::move(Maze& labr) {
    // se devi chiamare 1 sola volta inserisci bool per verificare
    // se la funzione è stata chiamata per la prima volta
    x = labr.get_start_X();
    y = labr.get_start_Y();
}