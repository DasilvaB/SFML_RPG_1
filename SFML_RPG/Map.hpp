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

class Map
{
public:
    Map();
    
    void createMap();
    
    void readFile(std::string fileName, int x, int y);
    
    void loadAssets();
    
    sf::Sprite tileSetSprite;
    sf::Sprite Floor;
    sf::Sprite Mob1;
    
     int grid[8][8];
    
private:
    std::fstream file;

    sf::Texture tileSet;
    
};



#endif /* Map_hpp */
