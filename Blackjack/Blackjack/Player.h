#pragma once
#include "Person.h"

class Player : public Person 
{
public:
	Player(const std::string& name = "" );

	~Player();
	
	bool isHitting() const;

	void Result(const std::string& result)const;
};

