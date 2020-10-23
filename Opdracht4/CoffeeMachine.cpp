#include "CoffeeMachine.h"
#include <iostream>
CoffeeMachine::CoffeeMachine() {
	
}

void CoffeeMachine::insertCoin(int value) {
	if (value == 0) {
		std::cout << "You've inserted 50 cents \n";
	}
	else if (value == 1) {
		std::cout << "You've inserted 1 euro \n";
	}
	else {
		std::cout << "You've inserted the special coin \n";
	}
	returnChoices(value);
}

void CoffeeMachine::returnChoices(int value) {
	std::cout << "Your choices are: \n";
	for (int i = 0; i <= value; i++) {
		std::cout << i << " : " << coffeeChoice[i] << '\n';
	}

}
