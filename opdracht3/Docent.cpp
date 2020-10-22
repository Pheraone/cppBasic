#include "Docent.h"


Docent::Docent(std::string _naam, int _leeftijd, std::string _vak) : Persoon(_naam, _leeftijd) {
	naam = _naam;
	leeftijd = _leeftijd;
	vak = _vak;
}

std::string Docent::getVak() {
	return vak;
}