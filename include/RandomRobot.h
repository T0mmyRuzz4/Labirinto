#ifndef RANDOM_ROBOT_H
#define RANDOM_ROBOT_H
#include "Maze.h"
#include "Robot.h"

class RandomRobot : Robot {
	public:
		RandomRobot();
		void move(Maze& labr) override;
		bool finish(Maze& labr) const { return (x == labr.get_exit_X() && y == labr.get_exit_Y()); }
};

#endif