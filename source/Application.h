#pragma once
#include <memory>
#include <SFML\Graphics.hpp>
#include "State\StateManager.h"
#include "State\States\GameState.h"
class Application {
public:
	Application();

	void run();
private:
	sf::RenderWindow window;
	StateManager stateManager;
};