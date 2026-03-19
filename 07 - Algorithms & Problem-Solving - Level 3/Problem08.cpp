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
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf("%0*d \t", 2,arr[i][j]);
        }
        cout << "\n";
    }
}

void MultiplyTwoMatrix(int arr[3][3], int arrTwo[3][3], int arrResult[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrResult[i][j] = arr[i][j] * arrTwo[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrTwo[3][3];
    int arrResult[3][3];


    FillMatrixWithRandomNumbers(arr, 3, 3);

    FillMatrixWithRandomNumbers(arrTwo, 3, 3);

    cout << "\nMatrix 1:\n";
    PrintMatrix(arr, 3, 3);

    cout << "\nMatrix 2:\n";
    PrintMatrix(arrTwo, 3, 3);


    MultiplyTwoMatrix(arr, arrTwo, arrResult, 3, 3);

    cout << "\nMatrix 3 The Result:\n";
    PrintMatrix(arrResult, 3, 3);

    system("pause>0");
    return 0;
}