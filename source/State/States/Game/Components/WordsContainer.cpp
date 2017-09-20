#include "WordsContainer.h"

WordsContainer::WordsContainer() :
	difficulty(50.f)
{

}

void WordsContainer::update(const float & deltaTime) {
	for(auto &it : container)
		it->move(sf::Vector2f{difficulty * deltaTime, 0.f});
}


bool WordsContainer::check(const std::string & text) {
	for(auto it = container.begin(); it != container.end(); it++) {
		if(it->get()->getString() == text) {
			container.erase(it);
			return true;
		}
	}
	return false;
}
