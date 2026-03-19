#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int printSumOfDigit(int number) {

    int sum = 0, int remainder = 0;

    while (number > 0) { 

        remainder = number % 10;
        sum += remainder;
        number = number / 10; 
    }
    return sum;
}


int main() {

    cout << "Sum Of Digit = " << printSumOfDigit(ReadPositiveNumber("Enter postive number : "));

}