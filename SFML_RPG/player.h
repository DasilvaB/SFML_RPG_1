#pragma once

#ifndef __player__
#define __player__

#include "entity.h"

class player : public entity
{
public:
	player();

	enum Direction { Down, Left, Right, Up };

	int movementSpeed = 0;
	int attackDamage = 5;

	sf::Clock clock, clock2;

	sf::Texture characterTexture;

	sf::Vector2i source;

	void update();
	void movement();

};

#endif 
