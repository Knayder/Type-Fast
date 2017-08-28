#include "Application.h"

Application::Application() :
	window(sf::VideoMode(1280, 720), "Type Fast")
{
	stateManager.push(std::make_unique<GameState>(sf::Color(37, 37, 48)));
}

void Application::run() {
	while(window.isOpen()) {
		stateManager.input(window);
		stateManager.display(window);
		window.display();
	}
}

