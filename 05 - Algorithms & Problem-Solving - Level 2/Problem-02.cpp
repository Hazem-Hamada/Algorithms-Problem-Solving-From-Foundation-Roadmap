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

int ReverseNumber(int Number)
{
    int Remainder = 0;
    int Number2 = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }

    return Number2;
}

void printDigitReversed(int number) {

    int remainder = 0;

    while (number > 0) { 

        remainder = number % 10; 

        number = number / 10; 

        cout << remainder << endl;
    }
}


int main() {

    printDigitReversed(ReverseNumber(ReadPositiveNumber("Enter postive number : ")));

}