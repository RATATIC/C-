#pragma once
#include "Hand.h" 

class Person : public Hand
{
	friend std::ostream& operator << (std::ostream& str, const Person& person);

protected :
	std::string name;

public :
	Person(const std::string& newName = "");

	~Person();

	virtual bool isHitting() const = 0 ;

	bool isBusted() const;

	void Bust() const;
};

