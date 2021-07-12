#include "Hand.h"

Hand::Hand()
{
	totalScore = 0;
}

Hand::~Hand()
{
	Clear();
}

void Hand::Add(Card* ptr_newCard)
{
	cards.push_back(ptr_newCard);

	totalScore = GetTotal();
}

void Hand::Clear()
{
	for (auto& it : cards)
	{
		delete it;
	}
	cards.clear();
}

std::size_t Hand::GetTotalScore()const
{
	return totalScore;
}

std::size_t Hand::GetTotal()const
{
	std::size_t total = 0;

	for (const auto& it : cards)
	{
		total += it->GetScore();
	}
	
	if (total <= 11)
		for (const auto& it : cards)
		{
			if (it->GetScore() == 1)
			{
				total += 10;
			}
		}

	return total ;
}

void Hand::ChangeScore()
{
	totalScore = GetTotal();
}