#include <fstream>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {

    std::vector<char> list; // lista da trasformare
	std::fstream fs("maze.txt");
	char c;
	fs.get(c);
    std::cout << c;
	fs.close();

    return 0;
}