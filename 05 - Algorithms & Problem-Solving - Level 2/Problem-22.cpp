#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number)
{
    if (Number <= 1)
        return NotPrime;

    int limit = sqrt(Number);

    for (int i = 2; i <= limit; i++)
    {
        if (Number % i == 0)
            return NotPrime;
    }

    return Prime;
}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArray(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
{
    int counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == Prime)
        {
            arrDestination[counter] = arrSource[i];
            counter++;
        }
    }

    arr2Length = counter;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArray(arr, arrLength);

    int arr2[100];
    int arr2Length = 0;

    CopyOnlyPrimeNumbers(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nPrime Numbers in Array 2:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}
