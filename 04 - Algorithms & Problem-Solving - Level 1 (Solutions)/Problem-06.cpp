#include <iostream>   
#include <string>     

using namespace std;

void read2Num(int& num1, int& num2) {
    cout << "Enter num1, num2 : \n";
    cin >> num1 >> num2;
}

void print2Num(int num1, int num2) {
    cout << "\nNumber 1 : " << num1 << endl << "Number 2 : " << num2 << endl;
}

void swap2Num(int& num1, int& num2) {
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1, num2;

    read2Num(num1, num2);
    print2Num(num1, num2);
    swap2Num(num1, num2);
    print2Num(num1, num2);

    return 0;
}