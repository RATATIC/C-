#pragma once

#include "Dealer.h"

class Deck : public Hand
{
public :
	Deck();
	~Deck();

	void Populate();

	void Shuffle();

	void Deal(Hand& aHand);

	void AdditionalCards(Person& aPerson);
};