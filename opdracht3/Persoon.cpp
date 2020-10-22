#include "Persoon.h"

#include <iostream>

Persoon::Persoon(std::string _naam, int _leeftijd) {
	naam = _naam;
	leeftijd = _leeftijd;
}

int Persoon::getAge() {
	return leeftijd;
}
std::string Persoon::getName() {
	return naam;
}
