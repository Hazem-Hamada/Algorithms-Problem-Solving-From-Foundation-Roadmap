#include <iostream>
#include <string>
using namespace std;

enum enMark {pass = 1, fail = 2};

float readMark() {
	float mark;
	cout << "Enter your mark : \n";
	cin >> mark;
	return mark;
}

enMark checkMark(float mark) {
	
	if (mark >= 50) {
		return enMark::pass;
	}
	else
	{
		return enMark::fail;
	}
}

void printPassOrFail(float mark) {
	if (checkMark(mark) == enMark::pass) {
		cout << "Pass";
	}
	else {
		cout << "Fail";
	}
}

int main() {

	printPassOrFail(readMark());

	return 0;
}
