#include "Person.h"

Person::Person(const std::string& newName) : name(newName)
{
	cards.reserve(11);
}

Person::~Person() {}

std::ostream& operator << (std::ostream& str, const Person& person)
{
	str << person.name << " :\t";

	if (!person.cards.empty())
	{
		for(const auto& it : person.cards)
		{
			str << *it << "\t";
		}

		str << std::endl;

		if (person.GetTotalScore() != 0)
		{
			str << "Score : " << person.GetTotalScore();
		}
	}
	else
	{
		str << "empty";
	}

	str << std::endl;

	return str;
}

bool Person::isBusted()const
{
	return (GetTotalScore() > 21 ) ;
}

void Person::Bust() const
{
	std::cout << "Player : " << name << " busts " << std::endl;
}