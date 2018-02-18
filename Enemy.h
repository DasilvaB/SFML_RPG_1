#pragma once

#ifndef Enemy_h
#define Enemy_h

#include "entity.hpp"
#include "ResourcePath.hpp"

class Enemy : public entity
{
public:
    Enemy();
    
    // Used to position player based on which direction hes facing.
    enum Direction { Down, Left, Right, Up };
    
    // Enemy attributes
    int movementSpeed = 0;
    int attackDamage = 5;
    
    // direction for projectile --- 1 up, 2 down,3 left, 4 right --- see notes for more info
    int direction = 0;
    
    // Clocks for speed control. Used to prevent lagg on slower computers.
    sf::Clock clock, clock2;
    
    sf::Texture characterTexture;
    
    sf::Vector2i source;
    
    // Main player methods
    void update();
    void movement();
    
    sf::Vector2f getPosition();
    
private:
    
    // vector to hold projectiles as well as an iterator to go through it.
    vector<Enemy>::const_iterator iter;
    vector<Enemy> projectiles;
};

#endif /* Enemy_h */
