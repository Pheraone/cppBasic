// cppBasic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>

#include "simonSays.h"

void SimonSays::askStartQuestions() {

	//TODO: tweak this so it will take one char instead of more and check them in one round...


	char input;

	std::cout << "Start the game?" << std::endl;
	std::cout << "y/n?" << std::endl;

	std::cin >> input;

	if (input == 'y') {
		//start game
		std::cout << "You said yes!\n " << std::endl;
		startGame();
	}
	else if (input == 'n') {
		std::cout << "You said no!" << std::endl;
		return; 
	}
	else {
		//ask question again
		std::cout << "You said somthing else!!!" << std::endl;
		askStartQuestions();
	}

}

//start game
void SimonSays::startGame() {

	std::cout << "starting game\n";
	clearScreen();
}

//TODO: Find good solution.
void SimonSays::clearScreen()
{
	int n;
	for (n = 0; n < 10; n++)
	std::cout << "\n\n\n\n\n\n\n\n\n\n";
}

void SimonSays::returnRandomNumbers() {

	std::cout << "OH LALALALA\n";
}

