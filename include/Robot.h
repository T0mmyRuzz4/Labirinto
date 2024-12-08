#ifndef ROBOT_H
#define ROBOT_H
#include "Maze.h"

class Robot {
	protected:
		// coordinate di posizione
		int x;
		int y;
		bool finish;
	public:
		Robot();
		virtual void move(Maze& labr) = 0;
};

#endif