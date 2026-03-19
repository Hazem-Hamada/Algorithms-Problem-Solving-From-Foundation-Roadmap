#include <iostream>   
#include <string>     

using namespace std;

int read2Num(int& num1, int& num2) {

    cout << "Enter Num1 : \n";
    cin >> num1;

    cout << "Enter Num2 : \n";
    cin >> num2;
    return num1, num2;
}

int checkMaxOf2Num(int num1, int num2) {

    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

void printMax(int num) {
    cout << "The MAX Number is : " << num << endl;
}

int main()
{
    int num1, num2;

    read2Num(num1, num2);

    printMax(checkMaxOf2Num(num1, num2));

    return 0;
}