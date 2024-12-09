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

	std::cout << "Come vuoi chiamare il tuo robot?\n";
	std::string name;
	std::cin >> name;
	std::cout << "Che tipo di robot vuoi che sia " << name << "?\n";
	std::cout << "1) RandomRobot\n2) RightHandRuleRobot\nInserire il numero corrispondente: ";
	int n;
	std::cin >> n;

	std::vector<char> list = std::vector<char>(9 * 9); // lista da trasformare
	std::fstream fs("maze.txt");
	char c;
	int i;
	while(fs.get(c))
		list[i++] = c;
	fs.close();

	std::vector<std::vector<char>> labr = std::vector<std::vector<char>>();

	return 0;
}