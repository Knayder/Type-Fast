#pragma once
#include "..\..\State.h"
#include "Components\Word.h"
#include <memory>
#include "Components\WordsContainer.h"
#include "Components\Dictionary.h"

class GameState : public State {
public:
	GameState(const sf::Color &color);
	virtual void input(const sf::Event &event) override;
	virtual void update(const float &deltaTime) override;
private:
	sf::Color bgColor;
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
	WordsContainer wordsContainer;
	Dictionary dictionary;
	sf::Font font;
	RandomEngine randomEngine;
};