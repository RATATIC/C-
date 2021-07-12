#pragma once
#include <iostream>
#include <map>

class Card
{
private :
	std::pair<std::string, std::string> card;
	bool isFaceUp;
	std::size_t score;

public :
	Card(std::pair<std::string , std::string> newCard , bool face);

	friend std::ostream& operator << (std::ostream& str, const Card& card);

	void Flip();

	std::size_t GetScore()const;

	std::size_t GetValue() const;
};

