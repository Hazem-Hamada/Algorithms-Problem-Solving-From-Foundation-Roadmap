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

void printDigitReversed(int number) {

    int remainder = 0;

    while (number > 0) { // 1234

        remainder = number % 10; // 4 // 3 // 2 // 1
        
        number = number / 10; // 123 // 12 // 0

        cout << remainder << endl; // 4 // 3 // 2 // 1
    }
}


int main() {

    printDigitReversed(ReadPositiveNumber("Enter postive number : "));

}