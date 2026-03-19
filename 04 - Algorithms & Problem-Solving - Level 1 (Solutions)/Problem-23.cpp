#include <iostream>
#include <string>
using namespace std;

enum enNumberType {Odd = 1, Even = 2};

int readNum() {
	int num;
	cout << "Enter a number to check : \n";
	cin >> num;
	return num;
}

enNumberType checkNumType(int num) {
	int result = num % 2;
	
	if (result == 0) {
		return enNumberType::Even;
	}
	else
	{
		return enNumberType::Odd;
	}

}

void printNumType(enNumberType NumberType) {

	if (NumberType == enNumberType::Even) {
		cout << "\nThis Number is : Even\n";
	}
	else
	{
		cout << "\nThis Number is : Odd\n";
	}

}

int main() {

	printNumType(checkNumType(readNum()));

	return 0;
}
