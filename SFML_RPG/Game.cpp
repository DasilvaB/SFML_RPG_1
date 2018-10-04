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
    
    position = window.GetMousePosition();
    
    mainPlayer.LoadAssets();
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
    position = window.GetMousePosition();
    std::cout << "x: " << position.x / 160 << " y: " << position.y / 160 << std::endl;
    
    // Place chacter in this position:
    std::cout << "x: " << (position.x / 160) * 80 << " y: " << (position.y / 160) * 80 << std::endl;
    

}
void Game::Update()
{
    window.Update();
}
void Game::Render()
{
    window.BeginDraw();
    
    //
    // Draws Map
    // Perhaps move into another Method.
    //
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
        {
            //std::cout << mapGrid[i][j] << std::endl;
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
    
        window.Draw(mainPlayer.sprite);
    
    window.EndDraw();
}

