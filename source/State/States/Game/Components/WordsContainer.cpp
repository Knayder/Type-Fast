#include "WordsContainer.h"

WordsContainer::WordsContainer() :
	difficulty(150.f),
	randomEngine(0, 35)
{

}

void WordsContainer::update(const float & deltaTime) {
	for(auto &it : container)
		it->move(sf::Vector2f{difficulty * deltaTime, 0.f});
}

void WordsContainer::add(std::unique_ptr<Word> word) {
	if(word) {
		word->setPosition({-150.f, 15.f * static_cast<float>(randomEngine.getRandomValue())});

		container.push_back(std::move(word));
	}
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

void WordsContainer::draw(sf::RenderTarget & target, sf::RenderStates states) const {
	for(auto &it : container) {
		target.draw(*it);
	}
}
