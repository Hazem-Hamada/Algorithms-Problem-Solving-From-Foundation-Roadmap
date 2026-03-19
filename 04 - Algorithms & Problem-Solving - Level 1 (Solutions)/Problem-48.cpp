#include <iostream>
#include <string>
using namespace std;

int readNum() {
	int num;
	cout << "Enter number to calculate Half :\n";
	cin >> num;
	return num;
}

float calculateHalfOfNum(int num) {
	return float(num / 2);
}

void printHalfOfNum(int num) {
	string result = "Half of Number " + to_string(num) + " Is: " + to_string(calculateHalfOfNum(num));
	cout << endl << result << endl;
}

int main() {

	printHalfOfNum(readNum());

	return 0;
}
