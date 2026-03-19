#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float TotalMonths(float LoanAmount, float totalMonth)
{
    return LoanAmount / totalMonth;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");

    float totalMonth = ReadPositiveNumber("Please Enter Total Monthly ?");

    cout << "\nMonthly Installment = " << TotalMonths(LoanAmount, totalMonth) << endl;

    return 0;
}