#include <string>

using namespace std;

class Accounts
{
public:
	Accounts();
	~Accounts();


	void setId(string id);
	void setPassword(string password);
	void setFName(string name);
	void setLName(string name);
	

	string getId() { return id; };
	string getPassword() { return password; };
	string getFirstName() { return fName; };
	string getLastName() { return lName; };

	void loadAccountInfo(string id);

private:
	string id;
	string password;
	string fName;
	string lName;


};

Accounts::Accounts()
{

}

Accounts::~Accounts()
{

}