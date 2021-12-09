#include "User.h"
#include "main.h"

User::User()
{
}
User::~User()
{
}
User::User(string account, string password)
{
	this->account = account;
	this->password = password;
}
string User::getAccount()
{
	return this->account;
}
string User::getPassword()
{
	return this->password;
}
void User::setAccount(string account)
{
	this->account = account;
}
void User::setPassword(string password)
{
	this->password = password;
}

// View the information of a specific book
void User::viewBookInfo()
{
	printmsg();
	cout << "Which book do you want to view for information? Please Enter Book's Number : ";
	int num;
	cin >> num;
	cout << endl;
	cout << Books[num]->toString();
	cout << "\n\nPress Enter Key To Continue : ";
	getch();
	cout << endl;
	display();
}

void User::viewBooks(vector<Book *> Books)
{
	system("cls");
	cout << "\n\t*******************************************************************************************\n";
	cout << "\t                                  LIBRARY MANAGEMENT SYSTEM                                  \n";
	cout << "\t                                          VIEW BOOK                                          \n";
	cout << "\n\t*******************************************************************************************\n\n";

	cout << "\tB.Number"
		 << "  "
		 << " ID"
		 << "           "
		 << "  Name"
		 << "      "
		 << "\t Author"
		 << "      "
		 << "\tPublisher"
		 << "  "
		 << "\t Price"
		 << "  "
		 << " IsBorrowed\n";

	for (unsigned int i = 0; i < Books.size(); i++)
	{
		cout << "\t  ";
		cout.width(4);		  // Set the character width
		cout.setf(ios::left); // Left aligned
		cout << i << "\t  ";
		cout.width(10);
		cout.setf(ios::left);
		cout << Books[i]->getID() << "\t  ";
		cout.width(8);
		cout.setf(ios::left);
		cout << Books[i]->getName() << "\t  ";
		cout.width(10);
		cout.setf(ios::left);
		cout << Books[i]->getAuthor() << "\t ";
		cout.width(9);
		cout.setf(ios::left);
		cout << Books[i]->getPublisher() << "\t  ";
		cout.width(5);
		cout.setf(ios::left);
		cout << Books[i]->getPrice() << "\t   ";
		if (!Books[i]->getBorrowed())
		{
			cout.setf(ios::left);
			cout << "  No\n";
		}
		else
		{
			cout.setf(ios::left);
			cout << "  Yes\n";
		}
	}
}
void User::Register(string account, string password)
{
	accounts[account] = password;
	fileManagement.saveUserInfo(accounts);
	printmsg();
	cout << "\n\t\t\tRegister Successfully...";
	Sleep(1000);
	cout << "\n\n\t\t\tPress Enter Key To Continue : ";
	getch();
}

void User::Login()
{
	// Get user account password and book information
	accounts = fileManagement.getUserInfo();
	Books = fileManagement.getBooks();

	// Verify login
	if (accounts[getAccount()] == getPassword())
	{
		// Display the User's page
		printmsg();
		cout << "\n\t\tLogin Successfully...";
		Sleep(1000);
		cout << "\n\n\t\tPress Enter Key To Continue : ";
		getch();
		this->display();
	}
	else
	{
		printmsg();
		cout << "Account And Password Is Error! Please Try Again..\n\n";
		// Reset user information, user re-enter account password to log in
		string account, password = "";
		cout << "\t\t Enter Your Username : ";
		cin >> account;
		cout << "\t\t Enter Your Password : ";
		char ch;
		while (true)
		{
			ch = _getch();
			if (ch == 13)
				break;
			password.push_back(ch);
			cout << "*";
		}
		setAccount(account);
		setPassword(password);
		this->Login();
	}
}
void User::display()
{
}
