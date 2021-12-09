#include "Admin.h"
#include "main.h"
Administrator::Administrator()
{
}
Administrator::Administrator(string account, string password) : User(account, password)
{
}
Administrator::~Administrator()
{
}
// Delete the book
void Administrator::deleteBook()
{
	printmsg();
	cout << " Which book do you want to delete ,please Enter Book's Number : ";
	int num;
	cin >> num;
	Books.erase(Books.begin() + num);
	cout << "\n Book Successfully deleted..";
	Sleep(1000);
	cout << "\n\n Press Any Key To Continue : ";
	getch();

	viewBooks(Books);

	cout << "\n Press Any Key To Continue : ";
	getch();
	cout << endl;
	display();
}
// Add books
void Administrator::addBook()
{
	cout << endl;
	printmsg();
	cout << "\t\t1. Computer Science & Engineering" << endl;
	cout << "\t\t2. Electronics & Communication Engineering" << endl;
	cout << "\t\t3. Electrical Engineering" << endl;
	cout << "\t\t4. Mechanical Engineering" << endl;
	cout << "\t\t5. Chemical Engineering " << endl;
	cout << "\t\t6. Civil Engineering" << endl;

	cout << "\nIn which branch, do you want to add Book? Please Enter Your Above Book's Type Number : ";
	int type;
	cin >> type;
	cout << "\nEnter Book's ID : ";
	string ID;
	cin >> ID;
	Book *book;
	book = fileManagement.getObject(arr[type - 1]);
	book->setBorrowed(false);
	book->setID(arr[type - 1] + ID);
	cout << "Enter Book's Name : ";
	string name;
	cin >> name;
	book->setName(name);
	cout << "Enter Book's Author : ";
	string author;
	cin >> author;
	book->setAuthor(author);
	cout << "Enter Book's Publisher : ";
	string Publisher;
	cin >> Publisher;
	book->setPublisher(Publisher);
	cout << "Enter Book's Price : ";
	int price;
	cin >> price;
	book->setPrice(price);
	cout << "Enter Book's Content : ";
	string Content;
	cin >> Content;
	book->setContent(Content);
	Books.push_back(book);
	FileManagement fileMan;
	fileMan.saveBooks(Books); // save Book
	cout << "\nBook Successfully Added..";
	Sleep(1000);
	cout << "\n\nPress Enter Key To Continue : ";
	getch();
	viewBooks(Books); // view Book
	cout << "\n Press Enter Key To Continue : ";
	getch();
	cout << endl;
	display();
}
// Modify book information
void Administrator::ResetBook()
{
	viewBooks(Books);
	cout << "\nEnter Choice Book's Number : ";
	int num;
	cin >> num;
	cout << "Enter Book's Name : ";
	string name;
	cin >> name;
	Books[num]->setName(name);
	cout << "Enter Book's Author : ";
	string author;
	cin >> author;
	Books[num]->setAuthor(author);
	cout << "Enter Book's Publisher : ";
	string Publisher;
	cin >> Publisher;
	Books[num]->setPublisher(Publisher);
	cout << "Enter Book's Price : ";
	int price;
	cin >> price;
	Books[num]->setPrice(price);
	cout << "Enter Book's Content : ";
	string Content;
	cin >> Content;
	Books[num]->setContent(Content);
	// Save changes
	FileManagement fileMan;
	fileMan.saveBooks(Books);
	cout << "\nBook's modification Successfully.." << endl;
	Sleep(1000);
	cout << "\nPress Enter to Continue : ";
	getch();

	viewBooks(Books);

	cout << "\n Press Enter Key To Continue : ";
	getch();
	cout << endl;
	display();
}
// Display the operation page of the administrator
void Administrator::display()
{
	system("cls");
	cout << "\n**************************************************************************\n";
	cout << "                         LIBRARY MANAGEMENT SYSTEM                          \n";
	cout << "                             ADMIN MENU PAGE                                \n";
	cout << "\n**************************************************************************\n\n";
	cout << "\t\t1. Add Book\n";
	cout << "\t\t2. Delete Book\n";
	cout << "\t\t3. Modify Book\n";
	cout << "\t\t4. View Book\n";
	cout << "\t\t5. View Book's Information\n";
	cout << "\t\t6. Exit!\n";
	cout << "\nPlease Enter Your Above Choice : ";
	int chosen;
	cin >> chosen;
	switch (chosen)
	{
	case 1:
		addBook();
		break;

	case 2:
		deleteBook();
		break;

	case 3:
		ResetBook();
		break;

	case 4:
		viewBooks(Books);
		cout << "\n Press Enter Key To Continue : ";
		getch();
		cout << endl;
		display();
		break;

	case 5:
		viewBookInfo();
		break;
	case 6:
		main();
	}
}
