#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

float readNumbers() {
    float A;
    cout << "Enter D : ";
    cin >> A; 
    return A;
}

float circleAreaInScriptedInSquare(float A) {
    const float pi = 3.14;
    float area = pi * pow((A / 2), 2);
    return area;
}

void printResult(float area) {
    cout << "The Area of Circle is : " << area;
}

int main()
{


    printResult(circleAreaInScriptedInSquare(readNumbers()));

    return 0;
}