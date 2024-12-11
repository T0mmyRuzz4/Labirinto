#ifndef ROBOT_H
#define ROBOT_H
#include "Maze.h"

class Robot {
	protected:
		// coordinate di posizione
		int x;
		int y;
		bool started;	// il robot è stato inserito in un labirinto
	public:
		Robot() {}
		virtual void move(Maze& labr) = 0;
};

#endif