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

void printInvertedPattern(int number) {

    cout << endl;

    for (int i = number; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{

    printInvertedPattern(ReadPositiveNumber("Enter Postive number : "));

    return 0;
}