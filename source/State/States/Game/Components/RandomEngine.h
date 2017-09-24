#pragma once
#include <random>

class RandomEngine {
public:
	RandomEngine() {}
	RandomEngine(const int &first, const int &last);
	RandomEngine(const RandomEngine &copy);
	void operator=(const RandomEngine &copy);

	int getRandomValue();
private:
	std::random_device rd;
	std::mt19937 gen;
	std::uniform_int_distribution<> rand;
};