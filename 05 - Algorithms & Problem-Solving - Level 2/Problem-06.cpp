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

    // A = 65

    for (int i = number; i >= 1; i--) { 
        
        for (int j = 1; j <= i; j++) {
            cout << char(i + 64);
        }
        cout << endl;
    }
}

int main()
{

    printInvertedPattern(ReadPositiveNumber("Enter Postive number : "));

    return 0;
}


=============================================


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

void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";
  
    for (int i = 65 + Number - 1; i >= 65; i--)
    {
        for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++)
        {
            cout << char(i);
        }
      
        cout << "\n";
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number?"));
    
    return 0;
}