#include "../include/graphic.hpp"

Graphic::Graphic(int width, int height, std::string name){
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	window = new sf::RenderWindow (sf::VideoMode(width, height), name, sf::Style::Default, settings);
	window->setFramerateLimit(60);
}

bool Graphic::isOpen(){
	return window->isOpen();
}

int Graphic::captureEvents(){
	sf::Event event;
    while (window->pollEvent(event)){
        if (event.type == sf::Event::Closed) { window->close(); return 8;}
        if (event.type == sf::Event::KeyPressed){
        	switch(event.key.code){

	        	case sf::Keyboard::Num0:
	        	case sf::Keyboard::Numpad0:
	        		return 0; 

	        	case sf::Keyboard::Num1:
	        	case sf::Keyboard::Numpad1:
	        		return 1; 

	        	case sf::Keyboard::Num2:
	        	case sf::Keyboard::Numpad2:
	        		return 2; 

	        	case sf::Keyboard::Num3:
	        	case sf::Keyboard::Numpad3:
	        		return 3; 

	        	case sf::Keyboard::Num4:
	        	case sf::Keyboard::Numpad4:
	        		return 4; 

	        	case sf::Keyboard::Num5:
	        	case sf::Keyboard::Numpad5:
	        		return 5; 

	        	case sf::Keyboard::Escape:
	        		window->close(); return 8;
        	}        	
        }
    }
    return 8;
}


void Graphic::render(Board *boardGame, int steps, int currentStep){
    window->clear();
    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(20, 20));
    int size = boardGame->getSize();

    int w_ = 110;
    int h_ = 10;

    sf::CircleShape circle(10);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(10, 10);
    window->draw(circle);

    circle.setFillColor(sf::Color::Blue);
    circle.setPosition(35, 10);
    window->draw(circle);

    circle.setFillColor(sf::Color::Green);
    circle.setPosition(60, 10);
    window->draw(circle);

    circle.setFillColor(sf::Color::Yellow);
    circle.setPosition(10, 35);
    window->draw(circle);

    circle.setFillColor(sf::Color::Magenta);
    circle.setPosition(35, 35);
    window->draw(circle);

    circle.setFillColor(sf::Color::Cyan);
    circle.setPosition(60, 35);
    window->draw(circle);

    for (int i = 0; i < size; i++){
    	w_ = 110;
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
	sf::Font font;
	if (!font.loadFromFile("./fonts/arial.ttf")){}
    	
	sf::Text text;
	text.setFont(font);
    text.setString("Turn: " + std::to_string(currentStep) + "/" + std::to_string(steps));
    text.move(10, 60);
    text.setColor(sf::Color::White);
    text.setCharacterSize(14);
    text.setStyle(sf::Text::Bold);
    window->draw(text);

    window->display();
}