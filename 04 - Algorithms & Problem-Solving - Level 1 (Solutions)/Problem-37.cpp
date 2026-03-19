#include <iostream>
#include <string>

using namespace std;

struct stTime {
    int days, hours, minutes, seconds;
};

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

stTime readTime() { // Read structers from user, and return the structers with data
    
    stTime time;

    time.days = ReadPositiveNumber("Enter number of days : ");
    time.hours = ReadPositiveNumber("Enter number of hours : ");
    time.minutes = ReadPositiveNumber("Enter number of minutes : ");
    time.seconds = ReadPositiveNumber("Enter number of seconds : ");
    return time;
}

int calculateSumOfSec(stTime time) {
    int totalSec = 0;

    totalSec = (time.days * 24 * 60 * 60) + (time.hours * 60 * 60)
                    + (time.minutes * 60) + (time.seconds);
    return totalSec;
}



int main()
{

    cout << "Total Seconds : " << calculateSumOfSec(readTime());

    return 0;
}






