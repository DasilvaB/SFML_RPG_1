#include <SFML/Graphics.hpp>
#include <iostream>
#include "player.h"
#include "entity.h"

int main() {

	sf::RenderWindow window(sf::VideoMode(800, 600), "First Window Test");
	window.setKeyRepeatEnabled(false);

	sf::Clock clock;

	player mainPlayer;

	while (window.isOpen())
	{
		sf::Time time;
		time = clock.getElapsedTime();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		//Movement for palyer
		mainPlayer.movement();

		//Update Player
		mainPlayer.update();

		//Draw Player
		window.draw(mainPlayer.sprite);
		
		window.display();
		window.clear();
	}

}
