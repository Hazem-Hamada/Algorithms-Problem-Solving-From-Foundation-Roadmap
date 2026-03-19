#include <iostream>
#include <string>
using namespace std;

string readNameFromUser() {
	string userName;
	cout << "Enter your name : \n";
	getline(cin, userName);
	return userName;
}

void printUserName(string userName) {
	cout << "\nYour name is : " << userName << endl;
}

int main() {

	printUserName(readNameFromUser());

	return 0;
}
