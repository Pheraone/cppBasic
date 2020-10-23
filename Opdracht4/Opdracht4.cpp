// Opdracht4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//
//Maak een serie classes die 'muntgeld' vertegenwoordigen:
//
//een baseclass
//een subclass voor een 50 - cent muntstuk
//een subclass 1 - euro muntstuk,
//en een subclass voor een speciaal 'koffiemuntje'.
//
//De classes hebben allemaal hun eigen waarde, en een eigen naam.
//
//Maak een class die een koffieautomaat gaat vertegenwoordigen.
//
////Deze class heeft methodes(!) nodig om de muntjes te accepteren,
//en kan 3 verschillende soorten koffie leveren, 
//tegen 3 verschillende prijzen. Met het speciale 'koffiemuntje' kun je alle koffie krijgen.
//
//Als je een muntje in de automaat gooit, toont de automaat wat voor munt 't was, en welke soorten koffie je daarmee kunt kopen.


#include"CoffeeMachine.h"
#include"FiftyCent.h"
#include"OneEuro.h"
#include"FreeCoffee.h"

int main()
{
	CoffeeMachine *coffeeMachine = new CoffeeMachine();
	FiftyCent fiftyCent = FiftyCent();
	OneEuro oneEuro = OneEuro();
	FreeCoffee specialCoin = FreeCoffee();
	std::cout << "Insert coin to see your choices \n";

	coffeeMachine->insertCoin(fiftyCent.getValue());
	std::cout << '\n';
	coffeeMachine->insertCoin(oneEuro.getValue());
	std::cout << '\n';
	coffeeMachine->insertCoin(specialCoin.getValue());

	delete(coffeeMachine);
	return 0;
}

