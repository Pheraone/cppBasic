#include "Caravan.h"
#include <iostream>

Caravan::Caravan(std::string _colour) {

	colour = _colour;
}

std::string Caravan::getColour() {
	return (colour);
}

void Caravan::putTrunkInCaravan() {

	trunk = new Trunk("red");
	showContent();
}

void Caravan::showContent() {
	std::cout << "The koffer is: " << trunk->getColour() << '\n';
	std::cout << "junk in the trunk: ",  trunk->showContent();
}

Caravan::Caravan(const Caravan& _otherCaravan) {
	if (this == &_otherCaravan)
		return;
	
	colour = _otherCaravan.colour;
	trunk = new Trunk(*_otherCaravan.trunk);

}

Caravan::~Caravan() {
	delete(trunk);
}