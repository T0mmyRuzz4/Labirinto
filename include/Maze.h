#ifndef MAZE_H
#define MAZE_H
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
		int get_start_X() const;
		int get_start_Y() const;
		int get_exit_X() const;
		int get_exit_Y() const;
		
};

#endif