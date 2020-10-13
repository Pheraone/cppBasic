//include libraries
#include <iostream>
#include <stdlib.h>
#include <list>
#include <time.h>
//include files
#include "simonSays.h"

void SimonSays::askStartQuestions() {

	//TODO: tweak this so it will take one char instead of more and check them in one round...
	char input;

	std::cout << "\n Start the game?" << std::endl;
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
	returnSimonsSequence();

}

//we need a function that waits before clearing the screen.


void SimonSays::clearScreen()
{
	//Zoek naar een manier om het scherm leeg te maken -> (deze is alleen niet cross platform)
	system("cls");
}

void SimonSays::returnSimonsSequence() {

	srand(time(NULL));
	
	std::list<int> simonsSequence = { rand() % 10, rand() % 10, rand() % 10 };
	for (auto v : simonsSequence) {
		std::cout << v;
	}

	//here we need to add an extra number to the sequence for every correct round

	//for testing
	//askStartQuestions();
}

//inputCheck
//check the input against the sequence
void SimonSays::checkInput() {
	//for input == sequence
	//
	//if input == sequence 
	
	
}


