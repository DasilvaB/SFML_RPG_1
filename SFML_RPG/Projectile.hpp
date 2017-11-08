//
//  Projectile.hpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 11/6/17.
//  Copyright © 2017 Bruno Dasilva. All rights reserved.
//

#ifndef Projectile_hpp
#define Projectile_hpp

#include "entity.h"
#include "player.h"
#include <SFML/Graphics.hpp>

class Projectile : public entity {
public:
    Projectile();
    
    int movementSpeed = 10;
    int damage = 5;

    //if 1 projectile goes up, 2 - down, 3 - left, 4 - right
    int direction = 0;
    
    void update();
    void fire(player mainPlayer, sf::RenderWindow& window);
    
private:
    int counter = 0;
    int counter2 = 0;
    int counter3 = 0;
    
    // vector to hold projectiles as well as an iterator to go through it.
    vector<Projectile>::const_iterator iter;
    vector<Projectile> projectiles;
    
};

#endif /* Projectile_hpp */
