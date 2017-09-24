#include "Word.h"

Word::Word(const std::string &text, sf::Font &font):
	sf::Text(text, font)
{
	setCharacterSize(15);
}

std::string Word::getString() {
	return sf::Text::getString();
}
