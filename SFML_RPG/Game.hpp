//
//  Game.hpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 2/17/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Window.hpp"
#include "player.h"
#include "entity.hpp"
#include "Map.hpp"

class Game {
public:
    Game();
    ~Game();
    
    void HandleInput();
    void Update();
    void Render();
    
    Window *GetWindow();
    
    sf::Time GetElapsed();
    void RestartClock();
    
private:
    Window window;
    sf::Clock clock;
    sf::Time elapsed;
    
    player mainPlayer;
    Map map;
    int mapGrid[][8];
    
};

#endif /* Game_hpp */
