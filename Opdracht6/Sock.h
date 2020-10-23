#pragma once
#include<string>
#include<iostream>
class Sock{
	private: 
		std::string colour = "grey";
	public:
		Sock();
		Sock(std::string _colour);
		std::string getColour();
		~Sock();
};

