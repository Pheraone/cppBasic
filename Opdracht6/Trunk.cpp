#include "Trunk.h"
Trunk::Trunk() {
	sock = new Sock("green");
}

Trunk::Trunk(std::string _colour) {
	sock = new Sock("green");
	colour = _colour;
}

std::string Trunk::getColour() {
	return (colour);
}

void Trunk::showContent() {
	std::cout << "Een sok \n";
	std::cout << "De kleur van de sok is: " << sock->getColour() << '\n';
}

Trunk::Trunk(const Trunk& _otherTrunk) {
	if (this == &_otherTrunk)
		return;
	colour = _otherTrunk.colour;
	sock = new Sock(*_otherTrunk.sock);
}

Trunk::~Trunk() {
	delete(sock);
}