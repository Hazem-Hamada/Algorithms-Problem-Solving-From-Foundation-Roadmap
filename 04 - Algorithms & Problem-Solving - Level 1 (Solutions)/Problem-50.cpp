#include <iostream>
#include <string>
using namespace std;

void read3Num(int& num1, int& num2, int& num3) {

	cout << "Enter num1, num2, num3 :\n";
	cin >> num1 >> num2 >> num3;

}

int sumOf3Num(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}

void printSumOfNum(int sum) {
	cout << "The total of number is : " << sum << endl;
}

int main() {

	int num1, num2, num3;

	read3Num(num1, num2, num3);

	printSumOfNum(sumOf3Num(num1, num2, num3));

	return 0;
}
