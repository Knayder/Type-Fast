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

void StateManager::input(const sf::Event &event) {
	states.top()->input(event);
}
