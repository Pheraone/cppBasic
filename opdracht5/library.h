#pragma once
#include "book.h"
class library
{
	private:
		book* theSadBook;
		bool isLendOut;

	public:
		library();
		void lendBook();
		void returnBook();
		~library();

};

