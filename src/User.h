#ifndef User_info
#define User_info

#include <string>
#include "Book.h"
#include <vector>
#include "FileManagement.h"
using namespace std;
class User // Base class
{
private:
	string account;	 // username
	string password; // password
protected:
	FileManagement fileManagement; // Maintain a file management object to manage files
	vector<Book *> Books;		   // Store book information
	map<string, string> accounts;  // Store user username password information
public:
	User(); // Default constructor
	User(string account, string password);
	~User();
	string getAccount();									// Get username
	string getPassword();									// Get password
	void setAccount(string account);						// Get username name
	void setPassword(string password);						// Get account password
	void viewBooks(vector<Book *> Books);					// View all book information
	void viewBookInfo();									// View book information
	virtual void Register(string account, string password); // Different user Register
	virtual void Login();									// Different user login
	virtual void display();									// Show different user interfaces
};

#endif