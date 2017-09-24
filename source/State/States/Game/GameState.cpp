#include "GameState.h"

GameState::GameState(const sf::Color &color) :
	bgColor(color)
{
	font.loadFromFile("resources/consola.ttf");

	for(int i = 0; i<10; i++)
		wordsContainer.add(std::make_unique<Word>(dictionary.getWord(), font));
}

void GameState::input(const sf::Event & event) {
	
}

void GameState::draw(sf::RenderTarget & target, sf::RenderStates states) const {
	target.clear(bgColor);
	target.draw(wordsContainer);
}

void GameState::update(const float &deltaTime) {
	wordsContainer.update(deltaTime);
}
