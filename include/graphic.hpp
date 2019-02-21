//=================================
// include guard
#ifndef GRAPHIC_H
#define GRAPHIC_H

//=================================
// Included dependencies
#include <SFML/Graphics.hpp>
#include "board.hpp"
//=================================
// The actual class
class Graphic {
    private:
        int widthCell, heightCell;
        sf::RenderWindow *window;
	public:
		Graphic(int width, int height, std::string name);
        
        /**
        * Render the game
        *
        * @param boardGame : The game board for render
        * @param steps : The total steps for play
        * @param currentStep : Is the current step of game
        **/
        void render (Board *boardGame, int steps, int currentStep);
        bool isOpen();
        int captureEvents();
	
};

#endif