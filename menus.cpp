#include "menus.h"

void loginMenu()
{
	int command = 0;
	string id, password;
	do
	{
		cout << "1 Log In\n2 Exit";
		cin >> command;
		if (command == 1)
		{
			cout << "Please enter your ID:\n\n";
			cin >> id;
			if (/*if id is invalid*/)
			{
				cout << "Invalid ID!\n\n";
			}
			else
			{
				cout << "Please enter your password.";
				cin >> password;
				if (/*password is invalid*/)
				{
					cout << "Invalid password!\n\n";
				}
				else
					mainMenu(id);
			}
		}
	} while (command != 2);

}


void mainMenu(string id)
{
	int command = 0;
	string id = id;
	
	do
	{
		printMenu(0);
		command = cin;   // only receive one number
		switch (command)
		{
		case 1:
			do
			{
				printMenu(1);
				command = cin;   // only receive one number
				//display items
			} while (command != 3);
				break;
		case 2:
			do
			{
				printMenu(2);
				command = cin;   // only receive one number
				// do something
			} while (command != 3);
				break;
		case 3:
			perform check out
				break;
		case 4:
			do
			{
				printMenu(3);
				command = cin;   // only receive one number
				// do something
			} while (command != 2);
				break;
		case 5:
			Perform log out,
				break;
		case default:
			prompt error, invalid command
				break;
		}
	} while (command != 5);      // 5 means log out
}