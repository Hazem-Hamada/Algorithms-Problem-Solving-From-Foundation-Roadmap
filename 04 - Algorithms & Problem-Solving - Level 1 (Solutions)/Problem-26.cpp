#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

int readNum() {
	int num;
	cout << "Enter number : \n";
	cin >> num;
	return num;
}

int readPower() {
	int power;
	cout << "Enter power (M) : \n";
	cin >> power;
	return power;
}

int powerOfM(int power, int num) {

	if (power == 0) {
		return 1;
	}

	int result = 1;
	for (int i = 1; i <= power; i++) {
		result = result * num;
	}
	return result;
}


int main()
{

	cout << "Result = " << powerOfM(readPower(), readNum());

	return 0;
}