#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

enum enOddOrEven {odd = 1, even = 2};

int readNum() {
	int num;
	cout << "Enter number : \n";
	cin >> num;
	return num;
}

enOddOrEven checkOddOrEven(int num) {
	if (num % 2 == 0) {
		return enOddOrEven::even;
	}
	else
	{
		return enOddOrEven::odd;
	}
}

int printSumFrom1ToN(int num) {
	int sum = 0;
	for (int i = 1; i <= num; i++) {

		if (checkOddOrEven(i) == enOddOrEven::even) {
			sum += i;
		}
	}
	return sum;
}

void printResult(int sum) {
	cout << "\nThe sum even number = "<< sum << endl;
}

int main()
{
	int num = readNum();

	printResult(printSumFrom1ToN(num));

	return 0;
}