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
    return (age >= from && age <= to); 
}

int readUntilAgeBetween(int from, int to) {

    int age = 0;

    do {
        age = readAge();
    } while (!vaildtateTheAge(age, from, to));

    return age;

}

void printResult(int age) {

        cout << "\nVaild Age. \n";
}

int main()
{
    printResult(readUntilAgeBetween(18, 45));

    return 0;
}