#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

float readNumbers() {
    float D;
    cout << "Enter D : ";
    cin >> D; 
    return D;
}

float circleAreaByDiameter(float D) {
    const float pi = 3.14;
    float area = (pi * pow(D, 2)) / 4;
    return area;
}

void printResult(float area) {
    cout << "The Area of Circle is : " << area;
}

int main()
{


    printResult(circleAreaByDiameter(readNumbers()));

    return 0;
}