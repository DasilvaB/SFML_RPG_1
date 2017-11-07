//
//  Projectile.cpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 11/6/17.
//  Copyright © 2017 Bruno Dasilva. All rights reserved.
//

#include "Projectile.hpp"

Projectile::Projectile() {
    rect.setSize(sf::Vector2f(32,32));
    rect.setPosition(0, 0);
    rect.setFillColor(sf::Color::Green);

}

void Projectile::update() {
    if(direction == 1)
    {
        rect.move(0, -1);
    }
    else if(direction == 2)
    {
        rect.move(0,1);
    }
    else if(direction == 3)
    {
        rect.move(-1,0);
    }
    else if(direction == 4)
    {
        rect.move(1,0);
    }
}
