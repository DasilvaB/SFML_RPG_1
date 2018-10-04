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
    //std::ifstream openfile("level1.txt");
    
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
    
    assetManager.LoadTexture("tileSet1", "tileSet1.png");
    
    tileSet = assetManager.GetTexture("tileSet1");
    
    mob1.setTexture(tileSet);
    mob1.setTextureRect(sf::IntRect(64,64,16,16));
    mob1.setPosition(0, 0);
    mob1.setScale(10, 10);
    
    floor.setTexture(tileSet);
    floor.setTextureRect(sf::IntRect(16,16,16,16));
    floor.setPosition(160, 320);
    floor.setScale(10, 10);
}

void Map::GetGrid(int a[][8])
{
    for(int x = 0; x < 8; x++)
        for(int y = 0; y < 8; y++)
            a[x][y] = grid[x][y];
}


