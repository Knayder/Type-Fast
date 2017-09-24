#pragma once
#include "Word.h"
#include <memory>
#include "RandomEngine.h"

class WordsContainer : public sf::Drawable {
public:
	WordsContainer();

	void update(const float &deltaTime);
	void add(std::unique_ptr<Word> word);
	bool check(const std::string &text);
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

	std::vector<std::unique_ptr<Word>> container;
	float difficulty;

	RandomEngine randomEngine;
};