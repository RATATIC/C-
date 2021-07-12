#include "Game.h"

/*	Описание классов 	

	Card - Карта для игры 

	Hand - набор карт 

	Deck - произвобный класс от Hand ,который собой представляет колоду 

	Person - абстрактный класс , который обобщенно описывает собой игрока

	Player - игрок 

	Dealer - дилер

	Game - процесс игры 
*/


/*    ПРАВИЛА  
* 
	В BlakJack каждый игрок пытиается заработать 21 очко 
	
	За каждую карту карут с яислом дается столько же очков 

	За J Q K даетя 10 очков 

	За А дается либо 1 либо 11 

	если превысит сумма чоков превычит 21 то игрок проигрывает 

	елси сумма очков больше дилера тоигрок выигрывает если меньше то проигрывает 

	если равны то ничья
*/

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