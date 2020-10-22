#include "Student.h"

Student::Student(std::string _naam, int _leeftijd, int _stresslevel) : Persoon(_naam, _leeftijd) {
	naam = _naam;
	leeftijd = _leeftijd;
	stressLevel = _stresslevel;
}

int Student::getStressLevel(){
	return stressLevel;
}