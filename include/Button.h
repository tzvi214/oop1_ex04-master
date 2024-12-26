#pragma once
#include <SFML/Graphics.hpp>

class Button
{
public:
	Button(sf::Texture&, sf::Vector2f);
	void draw(sf::RenderWindow&) const;

private:
	sf::Texture m_texture;
	sf::Vector2f m_position;
	sf::Sprite create() const; // create new Sprite for draw, according to the values ??of the current object.
};

