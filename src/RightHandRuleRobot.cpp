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
            x++;
        }
    }

    /* dopo aver raggiunto la destra, il robot si muove dritto fino all'ostacolo
    poi si muove a sinistra, aggiornando la variabile dello stato (direzione),
    finchè non trova libero davanti a se. Poi quando trova libero di fronte va dritto
    fino a che non trova libera la destra. Quando andando a sinistra viene bloccato deve andare
    verso il basso fino a che non trova un ostacolo o finchè non ha la sinistra libera */

}