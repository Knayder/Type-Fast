#include "RandomEngine.h"

RandomEngine::RandomEngine(const int &first, const int &last):
	gen(rd()),
	rand(first, last)
{

}

RandomEngine::RandomEngine(const RandomEngine & copy) {
	gen = copy.gen;
	rand = copy.rand;
}

void RandomEngine::operator=(const RandomEngine & copy) {
	gen = copy.gen;
	rand = copy.rand;
}

int RandomEngine::getRandomValue() {
	return rand(gen);
}
