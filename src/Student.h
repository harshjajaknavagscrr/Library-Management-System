#ifndef Student_info
#define Student_info
#include "User.h"
class Student : public User
{

public:
	Student(); // Default constructor
	Student(string account, string password);
	~Student();		   // Destructor
	void display();	   // Display personal information
	void borrowBook(); // Borrow book
	void ReturnBook(); // Return the book
};

#endif