#pragma once
#include"Trunk.h"
#include<string>

class Caravan
{
private: 
	std::string colour = "grey";

public:
	Caravan(std::string _colour);
	Trunk* trunk;
	void putTrunkInCaravan();
	std::string getColour();
	void showContent();

	Caravan(const Caravan& _otherCaravan);
	~Caravan();

};

