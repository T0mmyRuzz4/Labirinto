#ifndef RIGHT_HAND_RULE_ROBOT_H
#define RIGHT_HAND_RULE_ROBOT_H
#include "Maze.h"
#include "Robot.h"

class RightHandRuleRobot : Robot {
	int direction;	// 1 est, 2 nord, 3 ovest, 4 sud
	public:
		RightHandRuleRobot();
		void move(Maze& labr) override;
		bool finish(Maze& labr) const { return (x == labr.get_exit_X() && y == labr.get_exit_Y()); }
};

#endif