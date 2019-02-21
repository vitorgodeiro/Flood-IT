//=================================
// include guard
#ifndef GAME_H
#define GAME_H

//=================================
// Included dependencies
#include "graphic.hpp"

//=================================
// The actual class
class Game {
    private:
        Board *boardGame;
        int steps;

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
        Graphic *graphic;
	public:
		Game(int size, int steps);
		void play();	
};

#endif