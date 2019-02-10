//=================================
// include guard
#ifndef GAME_H
#define GAME_H

//=================================
// Included dependencies
#include "board.hpp"

//=================================
// The actual class

class Game {
	private:
		Board *boardGame;

		/**
        * Initialize the board
        */
		void populateBoard();

        /**
        * Makes the game board have almost the
        * same amount of different colors.
        */
        void equalNumbersElementsBoard();

        /**
        * Flood the game board
        **/
        void floods(int a, int b, int command, Board *board, Board *boardAux);

	public:
		Game(int size);
		void play();	
};

#endif