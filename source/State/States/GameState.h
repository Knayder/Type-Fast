#pragma once
#include "..\State.h"

class GameState : public State {
public:
	GameState(const sf::Color &color);
	virtual void input(const sf::Event &event) override;
private:
	sf::Color bgColor;

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};