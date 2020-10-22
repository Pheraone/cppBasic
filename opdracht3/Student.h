#pragma once
#include "Persoon.h"

class Student : public Persoon
{
	private:
		std::string naam;
		int leeftijd;
		int stressLevel;

	public:
		Student(std::string _naam, int  _leeftijd, int _stressLevel);
		int getStressLevel();
};

