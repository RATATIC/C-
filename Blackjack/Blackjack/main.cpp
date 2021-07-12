#include "Game.h"

int main()
{
	std::cout << "Blackjack" << std::endl << std::endl;

	int numPlayers = 0;

	std::cout << "How many Players ?" << std::endl;

	std::cin >> numPlayers;

	std::vector <std::string> names;

	std::string name;

	for (int i = 0; i < numPlayers; i++)
	{
		std::cout << "Enter player name: ";

		std::cin >> name;

		if ( std::find(names.begin(), names.end(), name) == names.end() )
		{
			names.push_back(name);
		}
		else
		{
			std::cout << "You enter bad name " << std::endl;
			i--;
		}
	}
	std::cout << std::endl;

	Game aGame(names);

	char again = 'y';

	while (again != 'n' && again != 'N')
	{
		aGame.Play();

		std :: cout << std::endl << "Do you want to play again ? (N / n - exit)" << std::endl;
		std::cin >> again;
	}
	
}