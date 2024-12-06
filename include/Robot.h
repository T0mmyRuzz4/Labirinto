#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include "Maze.h"

class Robot {
	// coordinate di posizione
	int x;
	int y;
	bool finish;
	public:
		Robot();
		void move(Maze& labr);
};

#endif