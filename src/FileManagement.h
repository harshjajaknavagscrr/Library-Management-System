#ifndef File_info
#define File_info

#include <vector>
#include <map>
#include "Book.h"
using namespace std;

class FileManagement
{
public:
	FileManagement();
	~FileManagement();

	void saveUserInfo(map<string, string> &accounts);
	map<string, string> getUserInfo();	// Read the information of the user file user.txt
	vector<Book *> getBooks();			// Read the information of book.txt
	void saveBooks(vector<Book *> vec); // Save changes to book information
	Book *getObject(string ID);
};

#endif