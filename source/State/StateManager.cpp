#include "StateManager.h"

StateManager::StateManager() {}

void StateManager::push(std::unique_ptr<State> object) {
	if(static_cast<bool>(object))
		states.push(std::move(object));
}

void StateManager::pop() {
	states.pop();
}

void StateManager::replace(std::unique_ptr<State> object) {
	if(object) {
		pop();
		states.push(std::move(object));
	}
}

void StateManager::display(sf::RenderTarget &target) {
	target.draw( *states.top().get() );
}

void StateManager::input(sf::RenderWindow &window) {
	sf::Event event;
	while(window.pollEvent(event)) {
		if(event.type == sf::Event::Closed)
			window.close();
		states.top().get()->input(event);
	}
}
