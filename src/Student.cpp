#include "Student.h"
#include "User.h"
#include "main.h"
Student::Student()
{
}
Student::~Student()
{
}
Student::Student(string account, string password) : User(account, password) // Use the initialization list to call the constructor of the base class
{
}
// Borrow book
void Student::borrowBook()
{
	viewBooks(Books);
	cout << "\nWhich above book do you want to borrow? Please Enter Book's Number : ";
	int num;
	cin >> num;
	Books[num]->setBorrowed(true);
	cout << "\nSuccess Borrow Book..";
	Sleep(1000);
	cout << "\n\nPress Enter Key To Continue : ";
	getch();

	viewBooks(Books);

	cout << "\n Press Enter Key To Continue : ";
	getch();
	cout << endl;

	display();
}
// Return the book
void Student::ReturnBook()
{
	viewBooks(Books);
	cout << "\nWhich above book do you want to return? Please Enter Book's Number : ";
	int num;
	cin >> num;
	Books[num]->setBorrowed(false);
	cout << "\nSuccess Return Book..";
	Sleep(1000);
	cout << "\n\nPress Enter Key To Continue : ";
	getch();
	viewBooks(Books);
	cout << "\n Press Enter Key To Continue : ";
	getch();
	cout << endl;
	display();
}

// Show Student interface
void Student::display()
{

	system("cls");
	cout << "\n**************************************************************************\n";
	cout << "                         LIBRARY MANAGEMENT SYSTEM                          \n";
	cout << "                             STUDENT MENU PAGE                              \n";
	cout << "\n**************************************************************************\n\n";
	cout << "\t\t1. View Book\n";
	cout << "\t\t2. View Book's Information\n";
	cout << "\t\t3. Borrow Book\n";
	cout << "\t\t4. Return Book\n";
	cout << "\t\t5. Exit\n";
	cout << endl;
	cout << "Please Enter Your Above Choice : ";
	int chose;
	cin >> chose;
	switch (chose)
	{
	case 1:
		viewBooks(Books);
		cout << "\n Press Enter Key To Continue : ";
		getch();
		cout << endl;
		display();
		break;
	case 2:
		viewBookInfo();
		break;
	case 3:
		borrowBook();
		break;
	case 4:
		ReturnBook();
		break;
	case 5:
		main();
	}
}
