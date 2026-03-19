#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

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

enPrimNotPrime CheckPrime(int Number)
{
    if (Number < 2)
        return enPrimNotPrime::NotPrime;

    int M = sqrt(Number);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;
}

void PrintNumberType(int Number)
{
    cout << "\n_____Check Prime numbers from 1 to " << Number << "_____\n";
    for (int i = 1; i <= Number; i++) {

        switch (CheckPrime(i))
        {
        case enPrimNotPrime::Prime:
            cout << i << "\n";
            break;
        }
    }
    
}

int main()
{
    PrintNumberType(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}
