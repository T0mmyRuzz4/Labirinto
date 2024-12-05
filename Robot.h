#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>

class Robot {
	// coordinate di posizione
	int X;
	int Y;
	public:
		Robot();
		virtual void move(Maze& labr);
		int get_pos_X();
		int get_pos_Y();

};

#endif