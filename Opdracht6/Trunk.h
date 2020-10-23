#pragma once
#include"Sock.h"
#include <string>
class Trunk
{
private: 
	std::string colour = "grey";

public:
	Trunk();
	Trunk(std::string _colour);
	//how do I sock
	Sock* sock = nullptr;

	std::string getColour();
	void showContent();
	Trunk(const Trunk& );
	~Trunk();
};

