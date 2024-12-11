#ifndef RIGHT_HAND_RULE_ROBOT_H
#define RIGHT_HAND_RULE_ROBOT_H
#include "Maze.h"
#include "Robot.h"

class RightHandRuleRobot : Robot {
	public:
		RightHandRuleRobot();
		void move(Maze& labr) override;
		bool finish(Maze& labr) const { return (x == labr.get_exit_X() && y == labr.get_exit_Y()); }
};

#endif