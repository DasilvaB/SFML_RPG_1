#pragma once

#ifndef __player__
#define __player__

#include "entity.hpp"
#include "ResourcePath.hpp"

class Enemy : public entity
{
public:
    Enemy();
    
    // Used to position player based on which direction hes facing.
    enum Direction { Down, Left, Right, Up };
    
    // Player attributes
    int movementSpeed = 0;
    int attackDamage = 5;
    
    // direction for projectile --- See notes
    int direction = 0;
    
    // Clocks for speed control. Used to prevent lagg on slower computers.
    sf::Clock clock, clock2;
    
    sf::Texture characterTexture;
    
    sf::Vector2i source;
    
    // Main player methods
    void update();
    void movement();
    
    sf::Vector2f getPosition();
};

#endif 
