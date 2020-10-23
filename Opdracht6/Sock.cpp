#include "Sock.h"
#include <iostream>

Sock::Sock() {
	
}

Sock::Sock(std::string _colour) {

	colour = _colour;
}


std::string Sock::getColour() {
	return colour;
}

Sock::~Sock() {

}

