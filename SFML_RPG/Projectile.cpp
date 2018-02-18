////
////  Projectile.cpp
////  SFML_RPG
////
////  Created by Bruno Dasilva on 11/6/17.
////  Copyright © 2017 Bruno Dasilva. All rights reserved.
////
//
//#include "Projectile.hpp"
//
//Projectile::Projectile() {
//    rect.setSize(sf::Vector2f(32,32));
//    rect.setPosition(0, 0);
//    rect.setFillColor(sf::Color::Green);
//
//}
//
//// Moves the projectile
//void Projectile::update() {
//    if(direction == 1)
//    {
//        rect.move(0, -1.5);
//    }
//    else if(direction == 2)
//    {
//        rect.move(0,1.5);
//    }
//    else if(direction == 3)
//    {
//        rect.move(-1.5,0);
//    }
//    else if(direction == 4)
//    {
//        rect.move(1.5,0);
//    }
//}
//
////Fires missles when pressing space bar
//void Projectile::fire(player mainPlayer, sf::RenderWindow& window) {
//
//    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
//    {
//        sf::Time time1 = clock.getElapsedTime();
//
//        // Time allows projectiles to not stack
//        if(time1.asMilliseconds() > 200)
//        {
//            Projectile projectile;
//            projectile.rect.setPosition(mainPlayer.getPosition().x, mainPlayer.getPosition().y);
//            projectile.direction = mainPlayer.direction;
//            projectiles.push_back(projectile);
//            time1 = clock.restart();
//        }
//    }
//
//    counter = 0;
//    for(iter = projectiles.begin(); iter != projectiles.end(); iter++)
//    {
//        projectiles[counter].update(); // Update projectile
//        window.draw(projectiles[counter].rect);
//
//        counter++;
//    }
//
//}

