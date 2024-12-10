#include <fstream>
#include <iostream>
#include <vector>
#include <string>

#include "include/Maze.h"
#include "include/Robot.h"
#include "include/RandomRobot.h"
#include "include/RightHandRuleRobot.h"

int main(int argc, char *argv[]) {
	if(argc != 2) {
		std::cout << "Scrivere \"./main maze.txt\"\n";
		return -1;
	}

	std::string name;	// nome robot
	int n;	// variabile per indicare il tipo di robot
	std::cout << "Come vuoi chiamare il tuo robot?\n";
	std::cin >> name;
	do {
		std::cout << "Che tipo di robot vuoi che sia " << name << "?\n";
		std::cout << "1) RandomRobot\n2) RightHandRuleRobot\nInserire il numero corrispondente: ";
		std::cin >> n;
	} while(n != 1 && n != 2);

	std::vector<char> list;
	std::vector<std::vector<char>> labr;	// matrice
	std::fstream fs("maze.txt");
	char c;
	while(fs.get(c)) {
		if(c == '\n') {
			labr.push_back(list);
			list.clear();
		}
		else
			list.push_back(c);
	}
	fs.close();

	Maze m = Maze(labr);	// creazione labirinto
	// if che suddivide il programma in base al robot scelto
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

	std::cout << "EVVIVA!\n" << name << " ha trovato l'uscita.\n";

	return 0;
}