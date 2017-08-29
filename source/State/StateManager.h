#pragma once
#include "State.h"

#include <stack>
#include <memory>

class StateManager {
public:
	StateManager();
	void push(std::unique_ptr<State> object);
	void pop();
	void replace(std::unique_ptr<State> object);

	void display(sf::RenderTarget &target);
	void input(const sf::Event &event);

private:
	std::stack<std::unique_ptr<State>> states;
};