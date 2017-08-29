#include "Application.h"

Application::Application() :
	window(sf::VideoMode(1280, 720), "Type Fast"),
	inputManager(&stateManager, &window),
	deltaTime(0.f)
{
	stateManager.push(std::make_unique<GameState>(sf::Color(37, 37, 48)));
	settings.maxFps = 60.f;
	//do something
}

void Application::run() {
	sf::Clock clock;
	while(window.isOpen()) {
		deltaTime = clock.getElapsedTime().asSeconds();
		if(deltaTime >= 1.f / settings.maxFps) {
			clock.restart();

			inputManager.handleInputs();
			stateManager.update(deltaTime);
			stateManager.display(window);
			window.display();
		}
	}
}

