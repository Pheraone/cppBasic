// opdracht3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Student.h"
#include "Docent.h"

#include <iostream>

int main()
{
	Student student = Student("Henk", 18, 3);
	std::cout << "Student: \n";
	std::cout << "Naam : " << student.getName() << std::endl ;
	std::cout << "Leeftijd : " << student.getAge() << std::endl;
	std::cout << "Stresslevel : " << student.getStressLevel() << std::endl;

	std::cout << "////// \n";

	Docent docent = Docent("Henkina", 34, "Wiskunde");
	std::cout << "Docent: \n";
	std::cout << "Naam : " << docent.getName() << std::endl;
	std::cout << "Leeftijd : " << docent.getAge() << std::endl;
	std::cout << "Vak : " << docent.getVak() << std::endl;
}

