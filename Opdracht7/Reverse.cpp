#include "Reverse.h"


int Reverse::Counter(std::string _fileIn)
{
	//initializing and opening input file
	std::ifstream fileIn;
	fileIn.open(_fileIn);

	char character;
	int characterCount = 0;

	//checking for file
	if (!fileIn) 
	{
		std::cout << "kan de textfile niet vinden." << std::endl;
		exit(1);
	}

	if (fileIn) {
		//count the characters in the file
		
		while (1)//while the program is running
		{
			fileIn.get(character);
			
			
			if (fileIn.eof())//break loop if end of file
			{
				break;
			}
			characterCount++;
		}
		fileIn.close();//close the file
		return characterCount;
	}
}

void Reverse::ReverseText(std::string _fileIn, std::string _fileOut) 
{
	//initializing and opening input file
	std::ofstream fileOut;
	fileOut.open(_fileOut);
	
	int maxChar = Counter(_fileIn);
	char character;

	//!!open after closing in the function above!
	//initializing and opening output file
	std::ifstream fileIn;
	fileIn.open(_fileIn);

	int i = maxChar - 1;

	//taking characters from end (input) and writing them in the start (output)
	while (i >= 0) {
		fileIn.seekg(i, fileIn.beg);//end of file
		fileIn.get(character);
		fileOut.put(character);
		i--;
	}

	//close the files
	fileOut.close();
	fileIn.close();
}
