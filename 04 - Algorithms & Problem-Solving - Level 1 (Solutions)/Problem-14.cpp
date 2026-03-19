#include <iostream>   
#include <string>     
#include <cmath>
using namespace std;

float readNum() {
    float L;
    cout << "Enter L : \n";
    cin >> L;
    return L;
}

float calculateCircalArea(float L) {
    const float pi = 3.14;
    float area = pow(L, 2) / (4 * pi);
    return area;
}

void printCicaleArea(float area) {
    cout << "\nThe Cicale Area Is : " << area;
}

int main()
{

    printCicaleArea(calculateCircalArea(readNum()));

    return 0;
}