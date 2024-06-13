#include<iostream>

using namespace std; 


class clsPerson {

private:
	string _FirstName;
	string _LastName;

public:
	//Property Set
	void SetFirstName(string FirstName) { _FirstName = FirstName; }

	//Property Get 
	string GetFirstName() { return _FirstName; }

	//Property Set 
	void SetLastName(string LastName) { _LastName = LastName; }

	//Property Get 
	string GetLastName() { return _LastName; }
	string GetFullName() { return _FirstName + " " + _LastName; }

	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;

	__declspec(property(get = GetFullName)) string FullName;
};

int main() {

		clsPerson Person1;

		Person1.FirstName = "Mohammed";
		Person1.LastName = "Al-Momany";

		cout << "First Name:" << Person1.FirstName << endl;     
		cout << "Last Name:" << Person1.LastName << endl;     
		cout << "Full Name:" << Person1.FullName << endl;

		system("pause>0"); 
		return 0;
}
