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

	cout << "\n________Print from " << num << " to 1________\n";

	for (int i = num; i >= 1; i--) {
		cout << i << endl;
	}
}

int main()
{
	print1toN(readNum());

	return 0;
}