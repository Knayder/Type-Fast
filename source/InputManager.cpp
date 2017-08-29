#include "InputManager.h"

InputManager::InputManager(StateManager *stateManager, sf::RenderWindow *window) :
	stateManager(stateManager),
	window(window)
{

}

void InputManager::handleInputs(sf::Window &window) {
	sf::Event event;
	while(window.pollEvent(event)) {
		if(event.type == sf::Event::Closed)
			window.close();

		stateManager->input
	}
}
