#include "player.h"

// Constructor. Handles the setup of the sprite.
player::player()
{
	rect.setSize(sf::Vector2f(32, 32));
	rect.setFillColor(sf::Color::Blue);
	rect.setPosition(400, 200);

	sprite.setPosition(400, 200);


	if (!characterTexture.loadFromFile(resourcePath() + "Hero.png"))
	{
		std::cout << "Failed to load Hero.png" << std::endl;
	}

	sprite.setTexture(characterTexture);
    sprite.setScale(2,2);
}

// Updates the position of the player every frame
void player::update()
{
	sprite.setPosition(rect.getPosition());
}

// Returns the players position
sf::Vector2f player::getPosition()
{
    return sprite.getPosition();
}

