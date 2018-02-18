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
#include "Projectile.hpp"
#include "entity.hpp"

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
    
};

#endif /* Game_hpp */