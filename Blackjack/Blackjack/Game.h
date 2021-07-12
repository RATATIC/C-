#pragma once

#include <vector>
#include <time.h>

#include "Deck.h"

class Game
{
private:
	Deck m_Deck;
	Dealer m_Dealer;
	std::vector<Player> Players;

public :
	Game(const std::vector<std::string>& names);

	~Game();

	void Play();
};