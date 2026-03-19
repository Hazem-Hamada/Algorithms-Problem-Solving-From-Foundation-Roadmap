#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;  

void readNumbers(float& A, float& D) {
    cout << "Enter A : ";
    cin >> A;

    cout << "Enter D : ";
    cin >> D;
}

float rectangleArea(float A, float D) {
    float area = A * sqrt(pow(D, 2) - pow(A, 2));
    return area;
}

void printResult(float area) {
    cout << "The Area of Rectangle is : " << area;
}

int main()
{
    float A, D;
    
    readNumbers(A, D);

    printResult(rectangleArea(A, D));

    return 0;  
}