#pragma once
#include <SFML\Graphics.hpp>
#include "State\StateManager.h"
class InputManager {
public:
	InputManager(StateManager *stateManager, sf::RenderWindow *window);

	void handleInputs(sf::Window &window);
private:
	StateManager *stateManager;
	sf::RenderWindow *window;
};