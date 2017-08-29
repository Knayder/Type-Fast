#pragma once
#include <SFML\Graphics.hpp>
#include "State\StateManager.h"
class InputManager {
public:
	InputManager(StateManager *stateManager, sf::RenderWindow *window);

	void handleInputs();
private:
	StateManager *stateManager;
	sf::RenderWindow *window;
};