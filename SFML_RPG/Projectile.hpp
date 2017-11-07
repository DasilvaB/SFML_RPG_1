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

class Projectile : public entity {
public:
    Projectile();
    
    int movementSpeed = 10;
    int damage = 5;

    //if 1 projectile goes up, 2 - down, 3 - left, 4 - right
    int direction = 0;
    
    void update();
};

#endif /* Projectile_hpp */
