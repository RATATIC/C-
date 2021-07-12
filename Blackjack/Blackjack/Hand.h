#pragma once

#include <vector>
#include "Card.h"

class Hand
{
protected:
	std::size_t totalScore;

	std::vector<Card*> cards;

public:

	Hand();

	virtual ~Hand();
	
	void Add(Card* ptr_newCard);

	void Clear();

	std::size_t GetTotalScore() const;

	std::size_t GetTotal() const;

	void ChangeScore();
};

