#include <fstream>
#include <iostream>
#include <vector>

#include "../include/Maze.h"
#include "../include/Robot.h"
#include "../include/RandomRobot.h"
#include "../include/RightHandRuleRobot.h"
// dopo aver fatto il CMake:
// main.cpp fuori da src e togliere ../ dagli includes

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

	/*
		Il programma in questo pezzo dovrà leggere il file e
		inserirlo in un array doppio (matrice) di char
	*/
	
	return 0;
}