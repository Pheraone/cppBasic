// opdracht5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"library.h"
#include <iostream>

//Maak een tragische bibliotheek : een bibliotheek met maar 1 boek.
//
//maak een Bibliotheek class en een Boek class
//maak de Bibliotheek en het Boek aan op de heap
//maak het mogelijk dat een Boek uitgeleend wordt(maak een leenUit())
//maak het mogelijk dat het Boek weer teruggegeven wordt
//
//Denk er aan om dingen weer op te ruimen...

int main()
{
	library *tragicLibrary;
	tragicLibrary = new library;

	tragicLibrary->lendBook();
	tragicLibrary->lendBook();
	tragicLibrary->returnBook();
	tragicLibrary->returnBook();

	
	std::cout << "\n destructor library";
	delete(tragicLibrary);

	
}

