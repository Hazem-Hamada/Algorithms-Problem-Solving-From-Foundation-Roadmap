#include <iostream>
#include <string>
using namespace std;

struct stDriverInfo {
	int age;
	bool hasDriverLic;
};

stDriverInfo readDriverInfo(){
	stDriverInfo info;
	
	cout << "Enter your age : \n";
	cin >> info.age;

	cout << "Are you have Driver License\nEnter true or false:\n";
	cin >> boolalpha >> info.hasDriverLic;
	return info;
}

bool isAccepted(stDriverInfo info) {
	return (info.age > 21 && info.hasDriverLic == true);
}

void printDriverState(stDriverInfo info) {
	if (isAccepted(info)) {
		cout << "\nHired\n";
	}
	else
	{
		cout << "\nRejected\n";
	}
}

int main() {

	printDriverState(readDriverInfo());

	return 0;
}
