#include "Combine.h"
#include<fstream>
#include<list>
#include <string>
#include <iostream>



void Combine::CombineFiles(std::string _fileIn1, std::string _fileIn2, std::string _fileOut) {

	//initializing and opening first input file
	std::ifstream fileIn1;
	fileIn1.open(_fileIn1);

	//initializing and opening second input file
	std::ifstream fileIn2;
	fileIn2.open(_fileIn2);

	//checking for files
	if (!fileIn1 || !fileIn2)
	{
		std::cout << "kan de textfile(s) niet vinden." << std::endl;
		exit(1);
	}

	//initializing and opening output file
	std::ofstream fileOut;
	fileOut.open(_fileOut);

	
	std::string line;
	std::string line2;

	//place and print next line of each input file 
	while (!fileIn1.eof() && !fileIn2.eof()) {
		std::getline(fileIn1, line);
		fileOut << line << std::endl;
		std::getline(fileIn2, line2);
		fileOut << line2 << std::endl;
	}

	//close the files
	fileIn1.close();
	fileIn2.close();
	fileOut.close();
}
