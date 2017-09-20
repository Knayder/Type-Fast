#include "GameState.h"

GameState::GameState(const sf::Color &color) :
	bgColor(color)
{

}

void GameState::input(const sf::Event & event) {

}

void GameState::draw(sf::RenderTarget & target, sf::RenderStates states) const {
	target.clear(bgColor);
}

void GameState::update(const float &deltaTime) {

}
