//
//  Map.cpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 3/2/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#include "Map.hpp"

Map::Map()
{
    std::cout << "test" << std::endl;
}

void Map::readFile(std::string fileName, int x, int y)
{
    file.open(fileName);
    
    if(!file.is_open())
    {
        std::cout << "Could not open map" << std::endl;
        exit(EXIT_FAILURE);
    }
    
    char tile;
    for(int i = 0; i < y; i++)
        for(int j = 0; j < x; j++)
        {
            file.get(tile);
            grid[i][j] = int(tile) - 48;
//            std::cout << grid[i][j] << std::endl;
//            std::cout << tile << std::endl;
            file.ignore();
        }
    
    std::cout << std::endl;
}

void Map::loadAssets()
{
    std::cout << "Assets loaded" << std::endl;
    
    if (!tileSet.loadFromFile(resourcePath() + "tileSet1.png"))
    {
        std::cout << "Failed to load tileSet1.png" << std::endl;
    }
    
    Mob1.setTexture(tileSet);
    Mob1.setTextureRect(sf::IntRect(64,64,16,16));
    Mob1.setPosition(0, 0);
    Mob1.setScale(10, 10);
    
    Floor.setTexture(tileSet);
    Floor.setTextureRect(sf::IntRect(16,16,16,16));
    Floor.setPosition(160, 320);
    Floor.setScale(10, 10);
}


