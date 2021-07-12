#include "Card.h"

Card::Card(std::pair < std::string, std::string > newCard, bool face) : isFaceUp(face) , card (newCard) 
{
	score = GetValue();
}


void Card::Flip()
{
	isFaceUp = !(isFaceUp);
}

std::ostream& operator << (std::ostream& str, const Card& acard)
{
	if (acard.isFaceUp)
	{
		str << acard.card.first << " " << acard.card.second;
	}
	else
	{
		str << "Card";
	}
	return str;
}

std::size_t Card::GetScore()const
{
	if (isFaceUp)
	{
		return score;
	}
	return 0;
}

std::size_t Card::GetValue() const
{
	std::size_t value = 0;

	if (card.first[0] >= '2' && card.first[0] <= '9')
	{
		value = card.first[0] - '0';
	}
	else
		if (card.first[0] == 'A')
		{
			value = 1;
		}
		else
		{
			value = 10;
		}
	
	return value;
}