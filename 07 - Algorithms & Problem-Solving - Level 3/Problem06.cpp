#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;


void FillMatrixWithRandomOrdered(int arr[3][3], short Rows, short Cols)
{
    int counter = 1;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = counter;
            counter++;
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


int main()
{
    int arr[3][3];

    FillMatrixWithRandomOrdered(arr, 3, 3);

    cout << "\nThe following is a 3x3 Ordered matrix:\n";
    PrintMatrix(arr, 3, 3);

    system("pause>0");
    return 0;
}