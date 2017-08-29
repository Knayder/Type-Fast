#include "Application.h"

Application::Application() :
	window(sf::VideoMode(1280, 720), "Type Fast"),
	inputManager(&stateManager, &window)
{
	stateManager.push(std::make_unique<GameState>(sf::Color(137, 137, 148)));
	//do something
}

void Application::run() {
	while(window.isOpen()) {
		

		inputManager.handleInputs(window);
		stateManager.display(window);
		window.display();
	}
}

