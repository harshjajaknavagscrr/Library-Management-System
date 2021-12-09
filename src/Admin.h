#ifndef Admin_info
#define Admin_info

#include "User.h"
#include "Book.h"
#include "FileManagement.h"

class Administrator : public User
{

private:
	string arr[10] = {"CSE", "ECE", "Electrical", "Mechanical", "Chemical", "Civil"};

public:
	Administrator();
	Administrator(string account, string password);
	~Administrator();
	void display();
	void deleteBook();
	void addBook();
	void ResetBook();
};

#endif