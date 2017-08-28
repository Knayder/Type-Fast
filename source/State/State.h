#pragma once
#include <SFML\Graphics.hpp>

class State : public sf::Drawable {
public:
	virtual void input(const sf::Event &) = 0;
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override = 0;
};