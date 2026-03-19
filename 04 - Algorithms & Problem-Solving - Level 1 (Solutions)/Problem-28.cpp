#include <iostream>
using namespace std;

int readTotalSales() {
    int sales;
    cout << "Enter total sales : \n";
    cin >> sales;
    return sales;
}

float getComissionPersentage(float totalSales) {

    if (totalSales > 1000000) {
        return (0.01);
    }
    else if (totalSales > 500000 && totalSales < 1000000) {
        return (0.02);
    }
    else if (totalSales > 100000 && totalSales < 500000) {
        return (0.03);
    }
    else if (totalSales > 50000 && totalSales < 100000) {
        return (0.05);
    }
    else
    {
        return 0;
    }
}

float calculateComision(float totalSales) {
    return getComissionPersentage(totalSales) * totalSales;
}

int main() {

    float totalSales = readTotalSales();

    cout << "Comission Persentage : " << getComissionPersentage(totalSales) << endl;
    cout << "Total comissin : " << calculateComision(totalSales) << endl;

    return 0;
}
