#pragma once
#include<list>
class SimonSays {
public:
	std::list<int> simonsSequence;
	SimonSays();
	
	void startGame();
	void clearScreen();
	void returnSimonsSequence();
	void iSleep();
	void addNumber();
};
