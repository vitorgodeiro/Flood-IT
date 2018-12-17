#include <iostream>
#include <time.h>
#include <cstdlib>
#include "../include/board.hpp"

int main (int argc, char *argv[]){
	Board *b = new Board(atoi(argv[1]));
	b->print();
	return 0;
}
