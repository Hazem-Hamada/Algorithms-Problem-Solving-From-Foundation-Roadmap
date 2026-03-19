#include <iostream>
using namespace std;

float readNumberinRange(int from, int to) {

    float grade;

    do
    {
        cout << "Enter the student Grade From " << from << " to " << to << endl;
        cin >> grade;

    } while (grade < from || grade > to);

    return grade;
}

char gradeLevel(float grade) {

    if (grade <= 100 && grade >= 90)
        return 'A';
    else if (grade < 90 && grade >= 80)
        return 'B';
    else if (grade < 80 && grade >= 70)
        return 'C';
    else if (grade < 70 && grade >= 60)
        return 'D';
    else if (grade < 60 && grade >= 50)
        return 'E';
    else
        return 'F';
}


int main() {

    cout << "Result = " << gradeLevel(readNumberinRange(0, 100));

    return 0;
}
