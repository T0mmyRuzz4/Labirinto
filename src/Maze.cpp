#include "../include/Maze.h"

Maze::Maze(const std::vector<std::vector<char>> f) {
    field = f;
    int lato = f[0].size();
    for(int ix = 0; ix < lato; ix++) {
        for(int iy = 0; iy < lato; iy++) {
            if(f[ix][iy] == 'S') {
                Xstart = ix;
                Ystart = iy;
            }
            else if(f[ix][iy] == 'E') {
                Xexit = ix;
                Yexit = iy;
            }
        }
    }
}

int Maze::get_start_X() const   { return Xstart; }
int Maze::get_start_Y() const   { return Ystart; }
int Maze::get_exit_X() const    { return Xexit; }
int Maze::get_exit_Y() const    { return Yexit; }

bool Maze::direction_free(int x, int y) {
    if(field[x][y] == '*')
        return false;
    else
        return true;
}