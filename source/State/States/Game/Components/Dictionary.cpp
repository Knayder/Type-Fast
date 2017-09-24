#include "Dictionary.h"

Dictionary::Dictionary()
{
	std::fstream file;
	file.open("resources/dictionary.txt", std::ios::in);
	int amount{};
	file >> amount;
	for(int i{0}; i < amount; ++i) {
		std::string temp;
		file >> temp;
		container.push_back(temp);
	}
	file.close();
	randomEngine = RandomEngine(0, amount - 1);
}

std::string Dictionary::getWord() {
	int index = randomEngine.getRandomValue();
	if(index > container.size() || index < 0)
		throw 20;
	return container[index];
}
