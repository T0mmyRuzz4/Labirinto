#include <fstream>
#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[]) {

    std::vector<char> list = std::vector<char>(9);
	std::vector<std::vector<char>> labr = std::vector<std::vector<char>>(9); // matrice
	std::fstream fs("maze.txt");
	char c;
	int i;
	int count;
	while(fs.get(c)) {
		if(c != '\n')
			list[count++] = c;
			if(count == 9) {
				labr[i++] = list;
				count = 0;
			}
	}
	fs.close();

	std::cout << "aaa\n" << labr[0][0];
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++)
			std::cout << labr[i][j]; // << "--" << (i+1)*(j+1) << "\n";

		std::cout << "nuova riga diocan";
	}

    return 0;
}