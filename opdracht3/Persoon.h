#pragma once
#include<string>
class Persoon
{
	private:
		int leeftijd;
		std::string naam;
	public:
		Persoon(std::string _naam, int _leeftijd);
		std::string getName();
		int getAge();
};

