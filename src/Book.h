#ifndef Book_info
#define Book_info

#include <string>
#include <iostream>
using namespace std;
class Book
{
private:
	string ID;		  // Book number
	string Name;	  // Book name
	string Author;	  // Book author
	string Publisher; // Book Publishing House
	int price;		  // Book price
	bool isBorrowed;  // Whether to lend
	string content;	  // Simple content
public:
	Book();
	~Book();
	void setID(string ID);
	string getID();
	void setName(string Name);
	string getName();
	void setAuthor(string Author);
	string getAuthor();
	void setPublisher(string publisher);
	string getPublisher();
	void setPrice(int price);
	int getPrice();
	void setBorrowed(bool flag);
	bool getBorrowed();
	void setContent(string content);
	string getContent();
	virtual string toString();
};

#endif