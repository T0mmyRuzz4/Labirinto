#include "../include/RightHandRuleRobot.h"

RightHandRuleRobot::RightHandRuleRobot() {
    started = false;
}

void RightHandRuleRobot::move(Maze& labr) {
    if(!started) {
        x = labr.get_start_X();
        y = labr.get_start_Y();
        started = true;
        while(labr.direction_free(x + 1, y)) {
            x = x + 1;;
            if(finish(labr))
                return;
        }
        direction = 2;  // dopo essersi spostato a destra il robot guarda verso nord/alto
    }

    if(direction == 1) {        // DIREZIONE: verso est/destra
        if(labr.direction_free(x, y + 1)) {
            y = y + 1;
            direction = 4;  // direzione aggiornata a sud/basso
        }
        else if(labr.direction_free(x + 1, y)) {
            x = x + 1;      // direzione invariata
        }
        else if(labr.direction_free(x, y - 1)) {
            y = y - 1;
            direction = 2;  // direzione aggiornata a nord/alto
        }    
        else if(labr.direction_free(x - 1, y)) {
            x = x - 1;
            direction = 3;  // direzione aggiornata a ovest/sinistra
        }
    }
    else if(direction == 2) {   // DIREZIONE: verso nord/alto
        if(labr.direction_free(x + 1, y)) {
            x = x + 1;
            direction = 1;  // direzione aggiornata a est/destra
        }
        else if(labr.direction_free(x, y - 1)) {
            y = y - 1;      // direzione invariata
        }    
        else if(labr.direction_free(x - 1, y)) {
            x = x - 1;
            direction = 3;  // direzione aggiornata a ovest/sinistra
        }
        else if(labr.direction_free(x, y + 1)) {
            y = y + 1;
            direction = 4;  // direzione aggiornata a sud/basso
        }
    }
    else if(direction == 3) {   // DIREZIONE: verso ovest/sinistra
        if(labr.direction_free(x, y - 1)) {
            y = y - 1;
            direction = 2;  // direzione aggiornata a nord/alto
        }
        else if(labr.direction_free(x - 1, y)) {
            x = x - 1;      // direzione invariata
        }
        else if(labr.direction_free(x, y + 1)) {
            y = y + 1;
            direction = 4;  // direzione aggiornata a sud/basso
        }
        else if(labr.direction_free(x + 1, y)) {
            x = x + 1;
            direction = 1;  // direzione aggiornata a est/destra
        }
    }
    else if(direction == 4) {   // DIREZIONE: verso sud/basso
        if(labr.direction_free(x - 1, y)) {
            x = x - 1;
            direction = 3;  // direzione aggiornata a ovest/sinistra
        }
        else if(labr.direction_free(x, y + 1)) {
            y = y + 1;      // direzione invariata
        }
        else if(labr.direction_free(x + 1, y)) {
            x = x + 1;
            direction = 1;  // direzione aggiornata a est/destra
        }
        else if(labr.direction_free(x, y - 1)) {
            y = y - 1;
            direction = 2;  // direzione aggiornata a nord/alto
        }
    }
}

bool RightHandRuleRobot::finish(const Maze& labr) {
    if(x == labr.get_exit_X() && y == labr.get_exit_Y()) {
        started = false;
        return true;
    }
    else
        return false;
}