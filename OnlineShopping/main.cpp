#include <iostream>
#include <string>
#include "Accounts.h"
#include "LineItems.h"
#include "Cart.h"
#include "Menu.h"
#include "ShoppingCart.cpp"

using namespace std;

int main()
{
	// after logged in
	Accounts account = loadAccountInfo(account, password);
	Cart  cart;
	int command;
	do
	{
		printMenu(0)
			command = cin;   // only receive one number
		switch (command)
		{
		case 1:
			do
			{
				printMenu(1);
				command = cin;   // only receive one number
				// do something
			} while (command != 3)
				Break;
		case 2:
			do
			{
				printMenu(2);
				command = cin;   // only receive one number
				// do something
			} while (command != 3)
				Break;
		case 3:
			perform check out
				Break;
		case 4:
			do
			{
				printMenu(3);
				command = cin;   // only receive one number
				// do something
			} while (command != 2)
				Break;
		case 5:
			Perform log out,
				Break;
		case default:
			prompt error, invalid command
				break;
		}
	} while (command != 5) 	        // 5 means log out







	return 0;
}

