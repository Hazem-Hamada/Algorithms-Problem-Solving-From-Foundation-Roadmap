#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	string firstName;
	string lastName;
};

stInfo readInfo() {
	stInfo info;
	cout << "Enter your first name : \n";
	cin >> info.firstName;

	cout << "Enter your last name : \n";
	cin >> info.lastName;

	return info;
}

string getFullName(stInfo info, bool reverse) {
	string fullName;

	if (reverse) {
		fullName = info.lastName + " " + info.firstName;
	}
	else
	{
		fullName = info.firstName + " " + info.lastName;
	}
	return fullName;
}

void printInfo(string fullName) {
	cout << "Your full name is : " << fullName << endl;
}

int main() {

	printInfo(getFullName(readInfo(), true));

	return 0;
}
