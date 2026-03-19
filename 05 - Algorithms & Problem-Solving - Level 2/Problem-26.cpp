#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Swap(int& A, int& B)
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

void CopyArrayInReversed(int arrSource[100], int arrDestination[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++) {

        arrDestination[i] = arrSource[arrLength - 1 - i];
    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];

    CopyArrayInReversed(arr, arr2, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy in Reversed:\n";
    PrintArray(arr2, arrLength);

    return 0;
}