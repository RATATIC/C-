#include "Player.h"

Player::Player(const std::string& newName) : Person(newName) {}

Player::~Player() {}

bool Player::isHitting()const
{
	std::cout  <<name<< " , do you want to take a card ? (Y/N)" << std::endl;

	char c;

	std::cin >> c;

	return (c == 'y' || c == 'Y');
}

void Player::Result(const std::string& result)const
{
	if (result == "Win" || result == "Lose" || result == "Draw")
	{
		std::cout << "Player : " << name << " - " << result << std::endl;
	}
	else
	{
		std::cout << "the result was entered incorrectly" << std::endl;
	}
}