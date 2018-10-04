//
//  AssetManager.cpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 3/3/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#include "AssetManager.hpp"

void AssetManager::LoadTexture(std::string name, std::string fileName)
{
    sf::Texture tex;
    
    if (!tex.loadFromFile(resourcePath() + fileName))
    {
        std::cout << "failed to load image: " << fileName << std::endl;
    }
    else
    {
        _textures[name] = tex;
    }
}

sf::Texture &AssetManager::GetTexture(std::string name)
{
    // Implement if not in map.
    
    return _textures.at(name);
}

