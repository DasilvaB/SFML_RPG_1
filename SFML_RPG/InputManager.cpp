//
//  InputManager.cpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 2/19/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#include "InputManager.hpp"

bool InputManager::IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window)
{
    //Testing if mouse is clicking on object that we want to click on.
    if (sf::Mouse::isButtonPressed(button))
    {
        sf::IntRect tempRect(object.getPosition().x, object.getPosition().y, object.getGlobalBounds().width, object.getGlobalBounds().height);
        
        if (tempRect.contains(sf::Mouse::getPosition(window)))
        {
            return true;
        }
    }
    
    return false;
}

void InputManager::Input(sf::Event event)
{
    // Checks for player movement
    if(event.type == sf::Event::KeyPressed)
        if(event.key.code == sf::Keyboard::W &&
           event.key.code == sf::Keyboard::A &&
           event.key.code == sf::Keyboard::S &&
           event.key.code == sf::Keyboard::D)
            player::movement();
    
}

sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow &window)
{
    return sf::Mouse::getPosition(window);
}

// Needs implementation
void InputManager::Movement(entity &object)
{
   
}
