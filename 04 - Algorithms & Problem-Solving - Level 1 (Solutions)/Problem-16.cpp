#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

void readNumbers(float& a, float& b, float& c) {

    cout << "Enter (a / b / c) : \n";

    cin >> a >> b >> c;
}

float calculateAreaCircle(float a, float b, float c) {

    const float pi = 3.14159265;

    const float p = (a + b + c) / 2;

    float area = pi * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
    
    return area;
}

void printArea(float area) {

    cout << "\nThe Area is : " << area << endl;

}

int main()
{
   
    float a, b, c;

    readNumbers(a, b, c);

    printArea(calculateAreaCircle(a, b, c));

    return 0;
}