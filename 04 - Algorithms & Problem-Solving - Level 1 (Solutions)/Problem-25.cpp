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

void powerOf2_3_4(int num) {
	cout << num * num << endl;
	cout << num * num * num << endl;
	cout << num * num * num * num << endl;
}

int main()
{
	powerOf2_3_4(readNum());

	return 0;
}