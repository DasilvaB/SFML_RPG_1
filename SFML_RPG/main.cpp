#include <SFML/Graphics.hpp>
#include <iostream>
#include "player.h"
#include "Projectile.hpp"
#include "entity.h"

int main() {
    
    // Creation of window and other variables such as objects in the world.
    // NOTE TO SELF: MAKE GAME WORLD FILE TO HANDLE WINDOWS AS WELL. TRY TO KEEP MAIN CONTAINING ONLY
    // THE MAIN LOOP. 
	sf::RenderWindow window(sf::VideoMode(800, 600), "First Window Test");
	window.setKeyRepeatEnabled(false);

	sf::Clock clock;

	player mainPlayer;
    Projectile projectile; 

    // Game loop
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
        
        //Fire projectile
        projectile.fire(mainPlayer, window);

		//Update Player
		mainPlayer.update();

		//Draw Player
		window.draw(mainPlayer.sprite);
        
		window.display();
		window.clear();
	}

}
