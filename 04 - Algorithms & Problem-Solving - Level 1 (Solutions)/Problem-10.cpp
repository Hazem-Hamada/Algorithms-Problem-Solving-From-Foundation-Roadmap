#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

float readNumbers() {
    float r;
    cout << "Enter r : ";
    cin >> r; 
    return r;
}

float circleArea(float r) {
    const float pi = 3.14;
    float area = pi * pow(r, 2);
    return area;
}

void printResult(float area) {
    cout << "The Area of Circle is : " << area;
}

int main()
{


    printResult(circleArea(readNumbers()));

    return 0;
}