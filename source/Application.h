#pragma once
#include <memory>
#include <SFML\Graphics.hpp>
#include "State\StateManager.h"
#include "State\States\Game\GameState.h"
#include "InputManager.h"
#include "Settings.h"
class Application {
public:
	Application();

	void run();
private:
	float deltaTime;

	Settings settings;

	sf::RenderWindow window;
	StateManager stateManager;
	InputManager inputManager;
};