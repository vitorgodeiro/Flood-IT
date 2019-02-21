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
        void render (Board *boardGame);
        bool isOpen();
	
};

#endif