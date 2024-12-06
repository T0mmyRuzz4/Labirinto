#ifndef MAZE_H
#define MAZE_H
#include <fstream>
// #include <iostream>
#include <vector>

class Maze {
	std::vector<std::vector<char>> field; // terreno
	// coordinate inizio
	int Xstart;
	int Ystart;
	// coordinate uscita
	int Xexit;
	int Yexit;
	public:
		Maze();
		Maze(const std::vector<std::vector<char>> f);
		int get_start_X();
		int get_start_Y();
		int get_exit_X();
		int get_exit_Y();
		
};

#endif