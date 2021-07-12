#include "Game.h"

Game::Game(const std::vector <std::string>& names)
{
	for (const auto& it : names)
	{
		Players.push_back(Player(it));
	}

	srand(time(0));

	m_Deck.Populate();
	m_Deck.Shuffle();
}

Game::~Game() {}

void Game::Play()
{
	for (int i = 0; i < 2; i++)
	{
		for (auto& it : Players)
		{
			m_Deck.Deal(it);
		}
		m_Deck.Deal(m_Dealer);
	}
	m_Dealer.FlipCard();

	for (const auto& it : Players)
	{
		std::cout << it << std::endl;
	}

	std::cout << m_Dealer << std::endl;

	for (auto& it : Players)
	{
		m_Deck.AdditionalCards(it);
	}

	m_Dealer.FlipCard();

	std::cout << std::endl << m_Dealer;

	m_Deck.AdditionalCards(m_Dealer);

	if (m_Dealer.isBusted())
	{
		for (const auto& it : Players)
		{
			if (!it.isBusted())
			{
				it.Result("Win");
			}
		}
	}
	else
	{
		for (const auto& it : Players)
		{
			if (!it.isBusted() )
			{
				if (it.GetTotal() > m_Dealer.GetTotal())
				{
					it.Result("Win");
				}
				else if (it.GetTotal() < m_Dealer.GetTotal())
				{
					it.Result("Lose");
				}
				else
				{
					it.Result("Draw");
				}
			}
		}

	}

	for (auto& it : Players)
	{
		it.Clear();
	}

	m_Dealer.Clear();
}
