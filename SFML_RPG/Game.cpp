//
//  Game.cpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 2/17/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#include "Game.hpp"

Game::Game() : window("SFML RPG", sf::Vector2u(1400,1200))
{
    RestartClock();
    srand(time(NULL));
}

Game::~Game() {}

sf::Time Game::GetElapsed() {
    return elapsed;
    
}

void Game::RestartClock() {
    elapsed = clock.restart();
}

Window* Game::GetWindow()
{
    return &window;
}



void Game::HandleInput()
{

    mainPlayer.movement();
    
}
void Game::Update()
{
    window.Update();
    
    mainPlayer.update();
}
void Game::Render()
{
    window.BeginDraw();
    window.Draw(mainPlayer.sprite);
    window.EndDraw();
}

Window *GetWindow();
void RestartClock();
