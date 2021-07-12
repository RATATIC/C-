#pragma once

#include "Player.h"

class Dealer : public Person
{
public :
	Dealer(const std::string& name = "Dealer");

	~Dealer();

	bool isHitting()const;

	void FlipCard();
};

