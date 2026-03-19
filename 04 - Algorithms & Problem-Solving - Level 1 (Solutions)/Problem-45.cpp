#include <iostream>
#include <string>
using namespace std;

struct stDriverInfo {
	int age;
	bool hasDriverLic;
	bool hasRecomendation;
};

stDriverInfo readDriverInfo() {
	stDriverInfo info;

	cout << "Enter your age : \n";
	cin >> info.age;

	cout << "Are you have Driver License\nEnter true or false:\n";
	cin >> boolalpha >> info.hasDriverLic;

	cout << "Are you have Recomendation\nEnter true or false:\n";
	cin >> boolalpha >> info.hasRecomendation;

	return info;
}

bool isAccepted(stDriverInfo info) {

	if (info.hasRecomendation) {
		return true;
	}
	else
	{
		return (info.age > 21 && info.hasDriverLic);
	}

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
