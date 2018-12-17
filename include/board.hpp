//=================================
// include guard
#ifndef BOARD_H
#define BOARD_H

//=================================
// Included dependencies
#include <iostream>
#include <time.h>
#include <cstdlib>


//=================================
// The actual class
class Board {
	private:
		int *e;
		int size;

		void populateBoard();

        /**
        * Makes the game board have almost the
        * same amount of different colors.
        */
        void equalNumbersElementsBoard();
	
	public:		
		Board(int s);
		void print();		
		int get (int i, int j);
};

#endif