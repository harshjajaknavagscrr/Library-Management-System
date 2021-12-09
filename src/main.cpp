#include "main.h"

void printmsg()
{
	system("cls");
	cout << "\n**************************************************************************\n";
	cout << "                          LIBRARY MANAGEMENT SYSTEM                         \n";
	cout << "\n**************************************************************************\n\n";
}

int main()
{
	while (true)
	{
		system("cls");
		cout << "\n**************************************************************************\n";
		cout << "                     WELCOME TO LIBRARY MANAGEMENT SYSTEM                   \n";
		cout << "                                  MAIN MENU                                 \n";
		cout << "\n**************************************************************************\n\n";
		cout << "\t\t1. Admin" << endl;
		cout << "\t\t2. Student" << endl;
		cout << "\t\t3. Exit" << endl;
		cout << "\nPlease Enter Your Above Choice : ";
		int n;
		cin >> n;
		if (n == 1)
		{
			system("cls");
			cout << "\n**************************************************************************\n";
			cout << "                         LIBRARY MANAGEMENT SYSTEM                          \n";
			cout << "                                 ADMIN PAGE                                 \n";
			cout << "\n**************************************************************************\n\n";
			cout << "\t\t1. Admin Login" << endl;
			cout << "\t\t2. Admin Register" << endl;
			cout << "\t\t3. Back to Main Menu" << endl;
			cout << "\t\t4. Exit" << endl;
			cout << "\n Please Enter Your Above Choice : ";

			int c;
			cin >> c;
			if (c == 1)
			{
				system("cls");
				cout << "\n**************************************************************************\n";
				cout << "                         LIBRARY MANAGEMENT SYSTEM                          \n";
				cout << "                             ADMIN LOGIN PAGE                               \n";
				cout << "\n**************************************************************************\n\n";
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

				Administrator *admin = new Administrator(account, password); // Administrator login
				admin->Login();
			}
			else if (c == 2)
			{
				system("cls");
				cout << "\n**************************************************************************\n";
				cout << "                         LIBRARY MANAGEMENT SYSTEM                          \n";
				cout << "                          ADMIN REGISTRATION PAGE                           \n";
				cout << "\n**************************************************************************\n\n";
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

				Administrator *admin = new Administrator(account, password); // Administrator Register
				admin->Register(account, password);
			}
			else if (c == 3)
			{
				main();
			}
			else if (c == 4)
			{
				exit(0);
			}
			else
			{

				system("cls");
				cout << "\n\n Error!!: Invalid Choice. Please Try Again..Press Enter to Continue : ";
				getch();
				main();
			}
		}
		else if (n == 2)
		{
			system("cls");
			cout << "\n**************************************************************************\n";
			cout << "                         LIBRARY MANAGEMENT SYSTEM                          \n";
			cout << "                                STUDENT PAGE                                \n";
			cout << "\n**************************************************************************\n\n";
			cout << "\t\t1. Student Login" << endl;
			cout << "\t\t2. Student Register" << endl;
			cout << "\t\t3. Back to Main Menu" << endl;
			cout << "\t\t4. Exit" << endl;
			cout << "\n Please Enter Your Above Choice : ";

			int c;
			cin >> c;
			if (c == 1)
			{
				system("cls");
				cout << "\n**************************************************************************\n";
				cout << "                         LIBRARY MANAGEMENT SYSTEM                          \n";
				cout << "                            STUDENT LOGIN PAGE                              \n";
				cout << "\n**************************************************************************\n\n";
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

				Student *student = new Student(account, password); // Student Login
				student->Login();
			}
			else if (c == 2)
			{
				system("cls");
				cout << "\n**************************************************************************\n";
				cout << "                         LIBRARY MANAGEMENT SYSTEM                          \n";
				cout << "                         STUDENT REGISTRATION PAGE                           \n";
				cout << "\n**************************************************************************\n\n";
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
				Student *student = new Student(account, password); // Student Register
				student->Register(account, password);
			}
			else if (c == 3)
			{
				main();
			}
			else if (c == 4)
			{
				exit(0);
			}
			else
			{

				system("cls");
				cout << "\n\n Error!!: Invalid Choice. Please Try Again...Press Enter to Continue : ";
				getch();
				main();
			}
		}
		else if (n == 3)
		{
			exit(0);
		}
		else
		{
			system("cls");
			cout << "\n\n Error!!: Invalid Choice. Please Try Again...Press Enter to Continue : ";
			getch();
			main();
		}
	}
	return 0;
}
