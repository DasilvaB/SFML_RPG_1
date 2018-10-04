//
//  Window.cpp
//  SFML_RPG
//
//  Created by Bruno Dasilva on 2/17/18.
//  Copyright © 2018 Bruno Dasilva. All rights reserved.
//

#include "Window.hpp"

Window::Window() {
    Setup("Window", sf::Vector2u(640,480));
}

Window::Window(const std::string& title, const sf::Vector2u& size)
{
    Setup(title, size);
}

Window::~Window()
{
    Destroy();
}

void Window::Setup(const std::string title, const sf::Vector2u& size)
{
    windowTitle = title;
    windowSize = size;
    isDone = false;
    window.setFramerateLimit(60);
    Create();
}

void Window::Create()
{
    auto style = sf::Style::Default;
    window.create({windowSize.x, windowSize.y, 32}, windowTitle, style);
}

void Window::Destroy()
{
    window.close();
}

void Window::BeginDraw() {
    window.clear(sf::Color::Black);
}

void Window::EndDraw()
{
    window.display();
}

bool Window::IsDone()
{
    return isDone;
}

void Window::Draw(sf::Drawable& drawable)
{
    window.draw(drawable);
}

sf::Vector2u Window::GetWindowSize()
{
    return windowSize;
}

void Window::Update()
{
    sf::Event event;
    while(window.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
            isDone = true;
    }
}

sf::Vector2i Window::GetMousePosition()
{
    sf::Vector2i position = sf::Mouse::getPosition(window);
    return position;
}






































