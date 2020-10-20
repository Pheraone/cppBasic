//include files
#include "simonSays.h"

//include libraries
#include <iostream>
#include <stdlib.h>
#include <list>
#include <time.h>
#include <iterator>
#include <chrono>
#include <thread>

 
SimonSays::SimonSays()
{
	startGame();
}

void SimonSays::startGame() {

	std::cout << "starting game\n";

	iSleep();
	clearScreen();

	srand(time(NULL));
	simonsSequence = { rand() % 10, rand() % 10, rand() % 10 };

	returnSimonsSequence();
}


void SimonSays::clearScreen()
{
	//Zoek naar een manier om het scherm leeg te maken -> (deze is alleen niet cross platform)
	system("cls");
}

void SimonSays::iSleep() {
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void SimonSays::returnSimonsSequence( ) {
	
	for (auto v : simonsSequence) {
		std::cout << v << "\n";
	}

	iSleep();

	clearScreen();

	for (std::list<int>::iterator it = simonsSequence.begin(); it != simonsSequence.end(); ++it)
	{
		int in;
		std::cin >> in;

		//check input with sequence
		if (in == *it) {
			continue;
		}
		else {
			clearScreen();
			std::cout << "Wrong answer \n";
			iSleep();
			clearScreen();
			startGame();
			return;
		}
	}

	std::cout << "noice";
	addNumber();
	iSleep();
	clearScreen();
	iSleep();
	returnSimonsSequence();
}

void SimonSays::addNumber() {
	simonsSequence.push_back(rand() % 10);
}




