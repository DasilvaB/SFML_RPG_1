//
//  AssetManager.hpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 3/3/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#ifndef AssetManager_hpp
#define AssetManager_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"
#include <string>
#include <iostream>

class AssetManager {
public:
    AssetManager() {}
    ~AssetManager() {}
    
    void LoadTexture(std::string name, std::string fileName);
    sf::Texture &GetTexture(std::string name);
    
private:
    std::map<std::string, sf::Texture> _textures;
    
};

#endif /* AssetManager_hpp */
