#include "library.h"

library::library() {
	theSadBook = new book();
	isLendOut = false;
}

void library::lendBook() {
	if (isLendOut == true) {
		std::cout << "Sorry this book is lend out already! Please pick another one. \n";
		std::cout << "oh wait... \n";
	}
	else {
		std::cout << "You borrowed the book:" << theSadBook->getTitle() << " from " << theSadBook->getAuthor() << '\n';
		isLendOut = true;
	}
}

void library::returnBook() {
	if (isLendOut == true) {
		std::cout << "You have returned the book, thank you! \n";
		isLendOut = false;
	}
	else {
		std::cout << "You do not have a book to return. \n";
	}
}

library::~library() {
	delete(theSadBook);
}