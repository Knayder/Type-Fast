#pragma once
#include "Word.h"
#include <memory>

class WordsContainer {
public:
	WordsContainer();

	void update(const float &deltaTime);

	bool check(const std::string &text);
private:
	std::vector<std::unique_ptr<Word>> container;
	float difficulty;
};