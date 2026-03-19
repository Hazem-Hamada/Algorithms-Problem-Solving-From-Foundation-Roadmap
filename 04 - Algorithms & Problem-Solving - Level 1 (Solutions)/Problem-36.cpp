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
    } while (Number < 0);
    return Number;
}

float hoursToDays(float numberOfHours) {
    return numberOfHours / 24;
}

float hoursToWeek(float numberOfHours) {
    return numberOfHours / 7 / 24;
}

float daysToWeek(float numberOfHours) {
    return numberOfHours / 7;
}



int main()
{
    float numberOfHours = ReadPositiveNumber("Input number of hour : ");

    float numberOfDays = hoursToDays(numberOfHours);

    float numberOfWeek = hoursToWeek(numberOfHours);

    cout << "\nTotal Hours : " << numberOfHours << endl;
    cout << "Total Days : " << numberOfDays << endl;
    cout << "Total Week : " << numberOfWeek << endl;
        
    return 0;
}






