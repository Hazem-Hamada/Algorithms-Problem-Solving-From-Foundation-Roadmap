#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

void readNum(float& A, float& B) {
    
    cout << "Enter A and B : \n";

    cin >> A >> B;
}

float calculateCircleArea(float A, float B) {

    const float pi = 3.14159265;

    float area = (pi * pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

    return area;
}

void printArea(float area) {
    cout << "The Area of Circle is : " << area;
}

int main()
{
    float A, B;

    readNum(A, B);

    printArea(calculateCircleArea(A, B));

    return 0;
}