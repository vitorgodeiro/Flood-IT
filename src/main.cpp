#include <iostream>
#include <cstdlib>
#include "../include/game.hpp"

int main (int argc, char *argv[]){

	Game *g = new Game(atoi(argv[1]));
	g->play();
	return 0;
}
