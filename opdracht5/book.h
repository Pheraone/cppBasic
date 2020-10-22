#pragma once

#include <iostream>

class book
{
	private:
		std::string title;
		std::string author;

	public:
		book();
		std::string getTitle();
		std::string getAuthor();
		~book();

};

