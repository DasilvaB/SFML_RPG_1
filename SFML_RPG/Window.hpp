//
//  Window.hpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 2/17/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#ifndef Window_hpp
#define Window_hpp

#include <stdio.h>
#include <string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Window
{
public:
    Window();
    Window(const std::string& title, const sf::Vector2u& size);
    ~Window();
    
    void BeginDraw();
    void EndDraw();
    
    void Update();
    
    bool IsDone();
    sf::Vector2u GetWindowSize();
    
    void Draw(sf::Drawable& l_drawable);
    
private:
    void Setup(const std::string title, const sf::Vector2u& size);
    void Create();
    void Destroy();
    
    sf::RenderWindow window;
    sf::Vector2u windowSize;
    std::string windowTitle;
    bool isDone;
    
};

#endif /* Window_hpp */
