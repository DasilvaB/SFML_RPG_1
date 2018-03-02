//
//  InputManager.hpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 2/19/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#ifndef InputManager_hpp
#define InputManager_hpp

#include <SFML/Graphics.hpp>
#include "entity.hpp"
#include "player.h"

enum Direction {
    Up, Down, Left, Right
};

class InputManager
{
public:
    InputManager() {}
    ~InputManager() {}
    
    bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
    
    sf::Vector2i GetMousePosition(sf::RenderWindow &window);
    
    void Input(sf::Event event);
    
    // Player methods
    void Movement(entity &object);
    
    
private:
    //sf::Time time;
    //sf::Clock clock, clock2;
    //sf::Vector2i source;
    //int direction = 0;
};

#endif /* InputManager_hpp */
