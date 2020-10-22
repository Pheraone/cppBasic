#pragma once
#include <iostream>


class Rooster 
{
	private:
		
	public:	
		void geefRoosterWeer() {
			//laat rooster zien
			std::cout << "rooster wordt weergegeven";

		}
};

class Leerling {
	private:
		std::string naam;
		int leeftijd;
		
	public:
		void zitInKlas(/*parameter welke klas?*/) {
			//return leerling in lijst? van de goede klas?
			//
		}

};

class Klas {
	private:
		int aantalLeerlingen;
		//array van leerlingen? met max aantalLeerlingen.
		int jaar;
		std::string abcd;
};

class Docent {
	private:
		std::string naam;
		int leeftijd;
		
};

class Vak {
	private:
		std::string type;

};

