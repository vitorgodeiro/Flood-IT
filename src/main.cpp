#include <iostream>
#include <cstdlib>
#include "../include/game.hpp"

int main (int argc, char *argv[]){

	if (argc < 3){ 
		std::cout << "Please enter the size of the board and the number of steps.\n";
		return 0;
	}

	Game *g = new Game(atoi(argv[1]), atoi(argv[2]));
	g->play();
	return 0;
}
