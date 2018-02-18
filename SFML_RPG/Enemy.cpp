#include "Enemy.h"

// Constructor. Handles the setup of the sprite.
Enemy::Enemy()
{
    rect.setSize(sf::Vector2f(32, 32));
    rect.setFillColor(sf::Color::Blue);
    rect.setPosition(400, 200);
    
    sprite.setPosition(400, 200);
    
    source.x = 0;
    source.y = Down;
    
    if (!characterTexture.loadFromFile(resourcePath() + "hero.png"))
    {
        std::cout << "Failed to load hero.png" << std::endl;
    }
    
    sprite.setTexture(characterTexture);
    sprite.setScale(2,2);
}

//// Updates the position of the player every frame
//void Enemy::update()
//{
//    sprite.setPosition(rect.getPosition());
//}
//
//// Returns the players position
//sf::Vector2f Enemy::getPosition()
//{
//    return sprite.getPosition();
//}
//
//// Movement of player. Handles movement based on speed of computer using Clock.
//void Enemy::movement()
//{
//    sf::Time time;
//    time = clock.getElapsedTime();
//    
//    if (clock2.getElapsedTime().asMilliseconds() >= 25.0f)
//    {
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
//        {
//            source.y = Up;
//            direction = 1; // ---- See Notes
//            if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
//            {
//                rect.move(0, -5);
//                if (time.asMilliseconds() >= 150)
//                {
//                    source.x++;
//                    if (source.x * 32 >= characterTexture.getSize().x)
//                        source.x = 0;
//                    clock.restart();
//                }
//            }
//            else
//                rect.move(0, -3);
//            clock2.restart();
//        }
//        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
//        {
//            source.y = Down;
//            direction = 2; // ---- See Notes
//            if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
//            {
//                rect.move(0, 5);
//                if (time.asMilliseconds() >= 150)
//                {
//                    source.x++;
//                    if (source.x * 32 >= characterTexture.getSize().x)
//                        source.x = 0;
//                    clock.restart();
//                }
//            }
//            else
//                rect.move(0, 3);
//            clock2.restart();
//        }
//        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
//        {
//            source.y = Left;
//            direction = 3; // ---- See Notes
//            if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
//            {
//                rect.move(-5, 0);
//                if (time.asMilliseconds() >= 150)
//                {
//                    source.x++;
//                    if (source.x * 32 >= characterTexture.getSize().x)
//                        source.x = 0;
//                    clock.restart();
//                }
//            }
//            else
//                rect.move(-3, 0);
//            clock2.restart();
//        }
//        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
//        {
//            source.y = Right;
//            direction = 4;  // ---- See Notes
//            if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
//            {
//                rect.move(5, 0);
//                if (time.asMilliseconds() >= 150)
//                {
//                    source.x++;
//                    if (source.x * 32 >= characterTexture.getSize().x)
//                        source.x = 0;
//                    clock.restart();
//                }
//            }
//            else
//                rect.move(3, 0);
//            clock2.restart();
//        }
//    }
//    
//    sprite.setTextureRect(sf::IntRect(source.x * 32, source.y * 32, 32, 32));
//    
//    if (time.asMilliseconds() >= 300 && (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)
//                                         || sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down)))
//    {
//        source.x++;
//        if (source.x * 32 >= characterTexture.getSize().x)
//            source.x = 0;
//        clock.restart();
//    }
//    
//    // Shows which part of spritesheet is being used. For debugging movement.
//    //std::cout << source.x << " " << source.y << std::endl;
//}
