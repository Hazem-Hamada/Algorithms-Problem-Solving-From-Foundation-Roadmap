#include <iostream>
#include <string>
#include <cmath>

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


bool checkPerfectOrNotPerfect(int number) {
    
    int sumOfDivisors = 0;

    for (int i = 1; i <= (number / 2); i++) {
        
        if (number % i == 0) {
            sumOfDivisors += i;
        }
    }
    return sumOfDivisors == number;
}


void PrintNumberType(int Number) {

    cout << "\nCheck Perfect number from 1 to " << Number << " \n";

    for (int i = 1; i <= Number; i++) {

        if (checkPerfectOrNotPerfect(i)) {
            cout << endl << i << endl;
        }

    }

}

int main()
{
    PrintNumberType(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}
