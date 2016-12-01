#include"Accounts.h"

Accounts::~Accounts()
{
	//save info to file here
}

void Accounts::setId(string id)
{
	Accounts::id = id;
}

void Accounts::setPassword(string password)
{
	Accounts::password = password;
}

void Accounts::setFName(string name)
{
	Accounts::fName = name;
}

void Accounts::setLName(string name)
{
	Accounts::lName = name;
}

void Accounts::loadAccountInfo(string id)
{
	string firstName, lastName, password, id;
	
	//read from files

	setFName(firstName);
	setLName(lastName);
	setPassword(password);
	setId(id);
	//do file stuff here 

	
}