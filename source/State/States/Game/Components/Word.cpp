#include "Word.h"

Word::Word(const std::string &text, sf::Font &font):
	sf::Text(text, font)
{}

inline std::string Word::getString() {
	return sf::Text::getString();
}
