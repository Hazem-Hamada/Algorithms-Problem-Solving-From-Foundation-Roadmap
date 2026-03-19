#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

void readNumbers(float& a, float& h) {
    cout << "Enter A : ";
    cin >> a;

    cout << "Enter D : ";
    cin >> h;
}

float triangleArea(float a, float h) {
    float area = (1.0 / 2) * (a * h);
    return area;
}

void printResult(float area) {
    cout << "The Area of Triangle is : " << area;
}

int main()
{
    float a, h;

    readNumbers(a, h);

    printResult(triangleArea(a, h));

    return 0;
}