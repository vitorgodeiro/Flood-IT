#include "../include/graphic.hpp"

Graphic::Graphic(int width, int height, std::string name){
	window = new sf::RenderWindow (sf::VideoMode(width, height), name);
	window->setFramerateLimit(60);

}

bool Graphic::isOpen(){
	return window->isOpen();
}
void Graphic::render(Board *boardGame){
	sf::Event event;
    while (window->pollEvent(event)){
        if (event.type == sf::Event::Closed)
           window->close();
    }


    window->clear();
    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(20, 20));
    int size = boardGame->getSize();

    int w_, h_ = 10;
    
    for (int i = 0; i < size; i++){
    	w_ = 10;
		for (int j = 0; j < size; j++){
			rectangle.setPosition(w_, h_);
			switch(boardGame->get(i, j)){
				case 0: 
					rectangle.setFillColor(sf::Color::Red); break;
				case 1:
					rectangle.setFillColor(sf::Color::Blue); break;
				case 2:
					rectangle.setFillColor(sf::Color::Green); break;
				case 3:
					rectangle.setFillColor(sf::Color::Yellow); break;
				case 4:
					rectangle.setFillColor(sf::Color::Magenta); break;
				case 5:
					rectangle.setFillColor(sf::Color::Cyan); break;
			}
			window->draw(rectangle);
			w_ += 25;
		}
		h_ += 25;
	}
    window->display();
}