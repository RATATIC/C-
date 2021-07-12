#include "Deck.h"
#include <string>
#include <algorithm>

Deck::Deck() 
{
	cards.reserve(52);
	Populate();
}

Deck::~Deck()
{

}

void Deck::Populate()
{
	Clear();

	auto Add_Card = [&](const std::string& suit, const int& j)
	{
		if (j == 1)
		{
			Add(new Card(std::make_pair("A", suit), true));
			return;
		}

		if (j >= 2 && j <= 9)
		{
			Add(new Card(std::make_pair(std::to_string(j), suit), true));
			return;
		}
		if (j == 10)
		{
			Add(new Card(std::make_pair("10", suit), true));
			return;
		}
		if (j == 11)
		{
			Add(new Card(std::make_pair("J", suit), true));
			return;
		}
		if (j == 12)
		{
			Add(new Card(std::make_pair("Q", suit), true));
			return;
		}
		if (j == 13)
		{
			Add(new Card(std::make_pair("K", suit), true));
			return;
		}
	};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			if (i == 0)
			{
				Add_Card("CLUBS", j);
			}
			else if (i == 1)
			{
				Add_Card("DIAMONDS", j);
			}
			else if (i == 2)
			{
				Add_Card("HEARTS", j);
			}
			else
			{
				Add_Card("SPADES", j);
			}

		}
	}
}

void Deck::Shuffle()
{
	std::random_shuffle(cards.begin(), cards.end());
}

void Deck::Deal(Hand& aHand)
{
	if (!cards.empty())
	{
		aHand.Add(cards.back());
		cards.pop_back();
	}
	else
	{
		std::cout << "Out of cards";
	}
}

void Deck::AdditionalCards(Person& aPerson)
{
	std::cout << std::endl;

	while (!(aPerson.isBusted()) && aPerson.isHitting())
	{
		Deal(aPerson);

		std::cout << aPerson << std::endl;
		
		if (aPerson.isBusted())
		{
			aPerson.Bust();
		}
	}
}