#include "Book.h"
Book::Book()
{
}
Book::~Book()
{
}
void Book::setID(string ID)
{
	this->ID = ID;
}
string Book::getID()
{
	return this->ID;
}
void Book::setName(string Name)
{
	this->Name = Name;
}
string Book::getName()
{
	return this->Name;
}
void Book::setAuthor(string Author)
{
	this->Author = Author;
}
string Book::getAuthor()
{
	return this->Author;
}
void Book::setPublisher(string publisher)
{
	this->Publisher = publisher;
}
string Book::getPublisher()
{
	return this->Publisher;
}
void Book::setPrice(int price)
{
	this->price = price;
}
int Book::getPrice()
{
	return this->price;
}
void Book::setBorrowed(bool flag)
{
	this->isBorrowed = flag;
}
bool Book::getBorrowed()
{
	return this->isBorrowed;
}
void Book::setContent(string content)
{
	this->content = content;
}
string Book::getContent()
{
	return this->content;
}
string Book::toString()
{
	return "This is a Book! Its Name is - " + getName() + "! And Its Content is - " + getContent() + "!\n";
}
