//
//  Game.cpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 2/17/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#include "Game.hpp"

Game::Game() : window("SFML RPG", sf::Vector2u(1280,1280))
{
    RestartClock();
    srand(time(NULL));
    map.loadAssets();
    map.readFile("level1.txt", 8, 8);
    map.GetGrid(mapGrid);
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

    
}
void Game::Update()
{
    window.Update();

}
void Game::Render()
{
    window.BeginDraw();
    
    //window.Draw(mainPlayer.sprite);
    
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
        {
            std::cout << mapGrid[i][j] << std::endl;
            if(mapGrid[i][j] == 0)
            {
                //why is x and y reversed here? lol maybe setposition is (y,x)? idk

                map.floor.setPosition(j*160, i*160);
                window.Draw(map.floor);
            }
            else if(mapGrid[i][j] == 1)
            {
                map.mob1.setPosition(j*160, i*160);
                window.Draw(map.mob1);
            }
        }
    
    window.EndDraw();
}

Window *GetWindow();
void RestartClock();
