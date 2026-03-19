#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

int readAge() {
    int age;
    cout << "Enter your Age : \n";
    cin >> age;
    return age;
}

bool vaildtateTheAge(int age, int from, int to) {
    return (age >= from && age <= to); // return --> True or False
}

void printResult(int age) {
    if (vaildtateTheAge(age, 18, 45)) {
        cout << "\nVaild Age. \n";
    }
    else {
        cout << "\ninvaild Age! \n";
    }
}

int main()
{
    printResult(readAge());

    return 0;
}