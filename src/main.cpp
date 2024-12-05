#include <iostream>
#include <vector>

#include "Maze.h"
#include "Robot.h"

int main(int argc, char *argv[]) {
	if(argc != 2 || argv[1] != "maze.txt") {
		std::cout << "Scrivere \"./main <maze.txt>\"\n";
		return -1;
	}
	
	return 0;
}