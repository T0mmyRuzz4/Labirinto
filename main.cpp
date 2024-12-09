#include <fstream>
#include <iostream>
#include <vector>

#include "include/Maze.h"
#include "include/Robot.h"
#include "include/RandomRobot.h"
#include "include/RightHandRuleRobot.h"

int main(int argc, char *argv[]) {
	if(argc != 2) {
		std::cout << "Scrivere \"./main maze.txt\"\n";
		return -1;
	}

	std::string name;
	int n;
	std::cout << "Come vuoi chiamare il tuo robot?\n";
	std::cin >> name;
	do {
		std::cout << "Che tipo di robot vuoi che sia " << name << "?\n";
		std::cout << "1) RandomRobot\n2) RightHandRuleRobot\nInserire il numero corrispondente: ";
		std::cin >> n;
	} while(n != 1 && n != 2);

	std::vector<char> list = std::vector<char>(9 * 9); // lista da trasformare

	std::fstream fs("maze.txt");
	char c;
	int i;
	while(fs.get(c))
		list[i++] = c;
	fs.close();

	std::vector<std::vector<char>> labr; // matrice
	int t;
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++)
			labr[i][j] = list[t++];
	}

	Maze m = Maze(labr);
	// if che suddivide il programma in base al robot scielto
	if(n == 1) {
		RandomRobot r;
		do {
			r.move(m);
		} while(!(r.finish(m)));
	}

	else if(n == 2) {
		RightHandRuleRobot r;
		do {
			r.move(m);
		} while(!(r.finish(m)));
	}

	return 0;
}