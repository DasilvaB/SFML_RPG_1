#include "player.h"

player::player()
{
	rect.setSize(sf::Vector2f(32, 32));
	rect.setFillColor(sf::Color::Blue);
	rect.setPosition(400, 200);

	sprite.setPosition(400, 200);

	source.x = 0;
	source.y = Down;

	if (!characterTexture.loadFromFile("hero.png"))
	{
		std::cout << "Failed to load hero.png" << std::endl;
	}

	sprite.setTexture(characterTexture);
}

void player::update()
{
	sprite.setPosition(rect.getPosition());
}

void player::movement() 
{
	sf::Time time;
	time = clock.getElapsedTime();

	if (clock2.getElapsedTime().asMilliseconds() >= 25.0f)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			source.y = Up;
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
			{
				rect.move(0, -5);
				if (time.asMilliseconds() >= 150)
				{
					source.x++;
					if (source.x * 32 >= characterTexture.getSize().x)
						source.x = 0;
					clock.restart();
				}
			}
			else
				rect.move(0, -3);
			clock2.restart();
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			source.y = Down;
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
			{
				rect.move(0, 5);
				if (time.asMilliseconds() >= 150)
				{
					source.x++;
					if (source.x * 32 >= characterTexture.getSize().x)
						source.x = 0;
					clock.restart();
				}
			}
			else
				rect.move(0, 3);
			clock2.restart();
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			source.y = Left;
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
			{
				rect.move(-5, 0);
				if (time.asMilliseconds() >= 150)
				{
					source.x++;
					if (source.x * 32 >= characterTexture.getSize().x)
						source.x = 0;
					clock.restart();
				}
			}
			else
				rect.move(-3, 0);
			clock2.restart();
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			source.y = Right;
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
			{
				rect.move(5, 0);
				if (time.asMilliseconds() >= 150)
				{
					source.x++;
					if (source.x * 32 >= characterTexture.getSize().x)
						source.x = 0;
					clock.restart();
				}
			}
			else
				rect.move(3, 0);
			clock2.restart();
		}
	}

	sprite.setTextureRect(sf::IntRect(source.x * 32, source.y * 32, 32, 32));

	if (time.asMilliseconds() >= 300 && (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)
										|| sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down)))
	{
		source.x++;
		if (source.x * 32 >= characterTexture.getSize().x)
			source.x = 0;
		clock.restart();
	}

	std::cout << source.x << " " << source.y << std::endl;
}