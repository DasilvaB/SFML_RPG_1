#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.hpp"

#include "Map.hpp"

int main() {
    
    Game game;
    while(!game.GetWindow()->IsDone())
    {
        game.HandleInput();
        game.Update();
        game.Render();
        game.RestartClock();

    }

}
