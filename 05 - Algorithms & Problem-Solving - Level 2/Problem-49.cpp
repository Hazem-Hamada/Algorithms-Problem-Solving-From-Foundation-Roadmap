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

int CountDigitFrequency(int Number, int digit) {

    int Remainder = 0;

    int count = 0;

    while (Number > 0)
    {

        Remainder = Number % 10; // 2     // 1223222 --> 2 -_> 5 times

        Number = Number / 10;

        if (Remainder == digit) {
            count++;
        }
    }
    return count;
}

int main()
{
    int number = ReadPositiveNumber("Enter Postive number : ");
    int digit = ReadPositiveNumber("Enter Digit to Count it : ");
    
    cout << "\nDigit " << digit << " Frequency " << CountDigitFrequency(number, digit) << " Times.\n";

    return 0;
}