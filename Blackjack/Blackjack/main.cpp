#include "Game.h"

/*	�������� ������� 	

	Card - ����� ��� ���� 

	Hand - ����� ���� 

	Deck - ����������� ����� �� Hand ,������� ����� ������������ ������ 

	Person - ����������� ����� , ������� ��������� ��������� ����� ������

	Player - ����� 

	Dealer - �����

	Game - ������� ���� 
*/


/*    �������  
* 
	� BlakJack ������ ����� ��������� ���������� 21 ���� 
	
	�� ������ ����� ����� � ������ ������ ������� �� ����� 

	�� J Q K ����� 10 ����� 

	�� � ������ ���� 1 ���� 11 

	���� �������� ����� ����� �������� 21 �� ����� ����������� 

	���� ����� ����� ������ ������ ������� ���������� ���� ������ �� ����������� 

	���� ����� �� �����
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

		names.push_back(name);
	}
	std::cout << std::endl;

	Game aGame(names);

	char again = 'y';

	while (again != 'n' && again != 'N')
	{
		aGame.Play();

		std :: cout << std::endl << "Do you want to play again ? (Y / N)";
		std::cin >> again;
	}
	
}