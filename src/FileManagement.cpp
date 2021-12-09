#include "FileManagement.h"
#include <fstream>
#include "CSE.h"
#include "ECE.h"
#include "Electrical.h"
#include "Mechanical.h"
#include "Chemical.h"
#include "Civil.h"

FileManagement::FileManagement()
{
}
FileManagement::~FileManagement()
{
}
Book *FileManagement::getObject(string ID)
{
	// If it is an e-book, return the e-book pointer
	if (ID.find("CSE") != string::npos)
	{
		return new CSE();
	}
	// If it is ECE, return the ECE pointer
	if (ID.find("ECE") != string::npos)
	{
		return new ECE();
	}
	if (ID.find("Electrical") != string::npos)
	{
		return new Electrical();
	}
	if (ID.find("Mechanical") != string::npos)
	{
		return new Mechanical();
	}
	if (ID.find("Chemical") != string::npos)
	{
		return new Chemical();
	}
	if (ID.find("Civil") != string::npos)
	{
		return new Civil();
	}
	return NULL;
}
void FileManagement::saveUserInfo(map<string, string> &accounts)
{
	ofstream outfile("User.txt", ios::app);
	map<string, string>::iterator itr;
	for (itr = accounts.begin(); itr != accounts.end(); itr++)
	{
		outfile << itr->first << " " << itr->second << endl;
	}
	outfile.close();
}

map<string, string> FileManagement::getUserInfo()
{
	ifstream file("User.txt", ios::in);
	if (!file)
	{
		cerr << "open User error!" << endl;
	}
	map<string, string> mp;
	// Read user account information
	while (!file.eof())
	{
		string account, password;
		file >> account >> password;
		mp[account] = password;
	}
	file.close();
	return mp;
}
vector<Book *> FileManagement::getBooks()
{
	ifstream infile("book.txt", ios::in);

	if (!infile)
	{
		cerr << "No book exist in the Library!" << endl;
	}
	vector<Book *> Books;
	Book *book;
	string ID, Name, Author, Pubilsher, Content;
	int price, flag;
	while (!infile.eof())
	{
		infile >> ID >> Name >> Author >> Pubilsher >> price >> flag >> Content;
		book = getObject(ID);
		book->setID(ID);
		book->setAuthor(Author);
		book->setName(Name);
		book->setPublisher(Pubilsher);
		book->setPrice(price);
		book->setContent(Content);
		if (flag == 0)
			book->setBorrowed(false);
		else
			book->setBorrowed(true);
		Books.push_back(book);
	}
	infile.close();
	return Books;
}
void FileManagement::saveBooks(vector<Book *> vec)
{
	ofstream outfile("book.txt", ios::out);
	if (!outfile)
	{
		cout << "open error";
	}
	for (unsigned int i = 0; i < vec.size(); i++)
	{
		outfile << vec[i]->getID() << " "
				<< vec[i]->getName() << " "
				<< vec[i]->getAuthor() << " "
				<< vec[i]->getPublisher() << " "
				<< vec[i]->getPrice() << " ";
		if (!vec[i]->getBorrowed())
		{
			outfile << 0;
		}
		else
		{
			outfile << 1;
		}
		outfile << " " << vec[i]->getContent();
		if (i != vec.size() - 1)
		{
			outfile << "\n";
		}
	}
	outfile.close();
}
