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
    
    int counter = 0;
    int counter2 = 0;
    int counter3 = 0;
    
    // vector to hold projectiles as well as an iterator to go through it.
    vector<Projectile>::const_iterator iter;
    vector<Projectile> projectiles;
    
    // Projectile
    Projectile projectile1;

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

		//Update Player
		mainPlayer.update();

		//Draw Player
		window.draw(mainPlayer.sprite);
        
        //Fires missles when pressing space bar
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space));
        {
            projectile1.rect.setPosition(200,200);
            projectile1.direction = mainPlayer.direction;
            projectiles.push_back(projectile1);
        }
        
        counter = 0;
        for(iter = projectiles.begin(); iter != projectiles.end(); iter++)
        {
            projectiles[counter].update(); // Update projectile
            window.draw(projectiles[counter].rect);
            
            counter++;
        }
        
        
		window.display();
		window.clear();
	}

}
