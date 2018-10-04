#pragma once

#ifndef __player__
#define __player__

#include "entity.hpp"
#include "ResourcePath.hpp"
#include "AssetManager.hpp"

class player : public entity
{
public:
	player();
    
    // Main player methods
	void update();
    sf::Vector2f getPosition();
    
    static void movement();
    
    void LoadAssets();
    
private:
    // Player attributes
    int movementSpeed = 0;
    int attackDamage = 5;
    
    sf::Texture characterTexture;
    
    AssetManager assetManager;
    
    sf::Vector2i source;

};

#endif 
