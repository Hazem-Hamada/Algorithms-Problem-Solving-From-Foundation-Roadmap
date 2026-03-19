#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

const int SecondsPerMinute = 60;
const int SecondsPerHour = 60 * 60;
const int SecondsPerDay = 24 * 60 * 60;

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

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;
    int Remainder = TotalSeconds;

    TaskDuration.NumberOfDays = Remainder / SecondsPerDay;
    Remainder = Remainder % SecondsPerDay;

    TaskDuration.NumberOfHours = Remainder / SecondsPerHour;
    Remainder = Remainder % SecondsPerHour;

    TaskDuration.NumberOfMinutes = Remainder / SecondsPerMinute;
    Remainder = Remainder % SecondsPerMinute;

    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":"
         << TaskDuration.NumberOfHours << ":"
         << TaskDuration.NumberOfMinutes << ":"
         << TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds?");

    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;
}