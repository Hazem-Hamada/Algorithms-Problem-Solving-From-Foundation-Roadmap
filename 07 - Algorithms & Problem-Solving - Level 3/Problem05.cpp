#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << "\n";
    }
}

int ColSum(int arr[3][3], short Row, short ColsNumber)
{
    int Sum = 0;
    for (short i = 0; i < Row; i++)
    {
        Sum += arr[i][ColsNumber];
    }
    return Sum;
}

void SumMatrixColInArr(int arr[3][3], int ColSumArr[3], short Rows, short Cols)
{
    for (int i = 0; i < Cols; i++)
    {
        ColSumArr[i] = ColSum(arr, Rows, i);
    }
}

void PrintEachColSum(int ColSumArr[3], short Cols)
{
    cout << "\nThe following are the sum of each col in the matrix:\n";
    for (short j = 0; j < Cols; j++)
    {
        cout << " Col " << j + 1 << " Sum = " << ColSumArr[j] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int ColSumArr[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    SumMatrixColInArr(arr, ColSumArr, 3, 3);

    PrintEachColSum(ColSumArr, 3);

    system("pause>0");
    return 0;
}