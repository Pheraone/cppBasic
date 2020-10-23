#pragma once
#include <string>
class CoffeeMachine
{
private:
	int value = -1;
public:
	std::string coffeeChoice[3] = { "Normal coffee", "Cappuchino", "Very Special Coffee" };
	CoffeeMachine();
	void insertCoin(int value);
	void returnChoices(int value);
};

