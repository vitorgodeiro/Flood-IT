//=================================
// include guard
#ifndef BOARD_H
#define BOARD_H

//=================================
// Included dependencies
#include <iostream>

//=================================
// The actual class
class Board {
	private:
		int *e;
		int size;
       	
	public:		
		Board(int size);

		void print();	
		int get (int i, int j);
		int getSize () { return size;};
		void set (int i, int j, int v);
		void zeros();

		/**
        * Verify if game board  is solved
        *
        * @return True:  If solved (All elements have same number)
        * @return False: If not solved (Has at least one different
        * 				 element in the game board)
        **/
        bool isSolved();		
};

#endif