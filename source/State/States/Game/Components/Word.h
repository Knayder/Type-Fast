#pragma once
#include <SFML\Graphics.hpp>

class Word : public sf::Text {
public:
	Word(const std::string &text, sf::Font &font);
	std::string getString();
private:

};