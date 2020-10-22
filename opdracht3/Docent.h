#pragma once
#include "Persoon.h"

class Docent : public Persoon
{
	
	private:
		std::string naam;
		int leeftijd;
		std::string vak;

	public:
		Docent(std::string _naam, int  _leeftijd, std::string _vak);
		std::string getVak();
	
};

