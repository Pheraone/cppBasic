#include "book.h"
book::book() {
	 title = "Het eenzame boek";
	 author = "A. Monkey";
}

std::string book::getTitle() {
	return title;
}

std::string book::getAuthor() {
	return author;
}

book::~book() {

}