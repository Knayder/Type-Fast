#pragma once
#include "..\..\State.h"
#include "Components\Word.h"
#include <memory>

class GameState : public State {
public:
	GameState(const sf::Color &color);
	virtual void input(const sf::Event &event) override;
	virtual void update(const float &deltaTime) override;
private:
	sf::Color bgColor;
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
	std::vector<std::unique_ptr<Word>> words;
};