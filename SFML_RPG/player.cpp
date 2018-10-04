#include "player.h"

// Constructor. Handles the setup of the sprite.
player::player()
{
	rect.setSize(sf::Vector2f(32, 32));
	rect.setFillColor(sf::Color::Blue);
	rect.setPosition(400, 200);
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

void player::LoadAssets()
{
    assetManager.LoadTexture("hero", "Hero.png");
    
    //sprite.setOrigin(sprite., 0)
    
    sprite.setTexture(assetManager.GetTexture("hero"));
    sprite.setTextureRect(sf::IntRect(64,64,32,32));
    sprite.setScale(4,4);
    sprite.setPosition((90 / 160) * 80, (90 / 160) * 80);
    
    //(90 / 160) * 80, (90 / 160) * 80
    
    rect.setSize(sf::Vector2f(32, 32));
    rect.setFillColor(sf::Color::Blue);
    rect.setPosition((90 / 160) * 80, (90 / 160) * 80);
    
    std::cout << "Assets Loaded: Player" << std::endl;
}

