#include "Dealer.h"

Dealer::Dealer(const std::string& name) : Person(name) {}

Dealer::~Dealer()
{

}

bool Dealer::isHitting()const
{
	return (GetTotalScore() <= 16);
}

void Dealer::FlipCard()
{
	if (!cards.empty())
	{
		(*cards.begin())->Flip();
		
		ChangeScore();
	}
	else
	{
		std::cout << "Hand is empty "  << std::endl;
	}
}