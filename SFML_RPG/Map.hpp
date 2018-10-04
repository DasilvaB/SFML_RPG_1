//
//  Map.hpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 3/2/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#ifndef Map_hpp
#define Map_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"
#include "AssetManager.hpp"

class Map
{
public:
    Map();
    
    void readFile(std::string fileName, int x, int y);
    
    void loadAssets();

    void GetGrid(int a[][8]);
    
    sf::Sprite tileSetSprite;
    sf::Sprite floor;
    sf::Sprite mob1;
    
private:
    std::fstream file;
    
    int grid[8][8];
    
    AssetManager assetManager;
    
    sf::Texture tileSet;
    
};



#endif /* Map_hpp */
