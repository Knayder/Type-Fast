#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "RandomEngine.h"
#include <stdexcept>

class Dictionary {
public:
	Dictionary();

	std::string getWord();
private:
	std::vector<std::string> container;
	RandomEngine randomEngine;
};