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
	// coordinate robot
	int Xrobot;
	int Yrobot;
	public:
		Maze();
		Maze(const std::vector<std::vector<char>> f);
		int get_start_X() const;
		int get_start_Y() const;
		int get_exit_X() const;
		int get_exit_Y() const;
		bool free_right(int x);
		bool direction_free(int x, int y);

};

#endif