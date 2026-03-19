#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

int readPostiveNum(string message) {
	int number;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

void printFactOfN(int num) {
	int fact = 1;
	for (int i = num; i >= 1; i--) {
		fact = fact * i;
	}
	cout << "Fact of " << num << " = " << fact;
}

int main()
{

	printFactOfN(readPostiveNum("Enter postive number :"));

	return 0;
}