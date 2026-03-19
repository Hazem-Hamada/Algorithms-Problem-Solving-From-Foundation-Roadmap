#include <iostream>   
#include <string>     

using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter Mark 1 ? " << endl;
    cin >> Mark1;

    cout << "Please enter Mark 2 ? " << endl;
    cin >> Mark2;

    cout << "Please enter Mark 3 ? " << endl;
    cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}


float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail checkPassFail(float Average) {

    if (Average >= 50) {
        return enPassFail::Pass;
    }
    else
    {
        return enPassFail::Fail;
    }

}

void PrintResults(float Average)
{
    cout << "\nThe average is : " << Average << endl;

    if (checkPassFail(Average) == enPassFail::Pass) {
        cout << "You Passed!\n";
    }
    else
    {
        cout << "You Failed\n";
    }
}

int main()
{
    int Mark1, Mark2, Mark3;

    ReadNumbers(Mark1, Mark2, Mark3);

    PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}