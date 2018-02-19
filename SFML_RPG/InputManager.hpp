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

class InputManager
{
public:
    InputManager() {}
    ~InputManager() {}
    
    bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
    
    sf::Vector2i GetMousePosition(sf::RenderWindow &window);
    
    
private:
    
};

#endif /* InputManager_hpp */
