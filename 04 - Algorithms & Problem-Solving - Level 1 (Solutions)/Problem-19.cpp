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

void print1toN(int num) {

	cout << "\n________Print from 1 to " << num << "________\n";

	for (int i = 1; i <= num; i++) {
		cout << i << endl;
	}
}

int main()
{
	print1toN(readNum());

	return 0;
}