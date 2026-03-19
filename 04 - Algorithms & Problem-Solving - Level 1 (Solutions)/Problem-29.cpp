#include <iostream>
using namespace std;

struct stCoins {
	int penny, nickel, dime, quarter, dollar;
};

stCoins readPennies() {
	stCoins coins;
	cout << "Enter Pennies : \n";
	cin >> coins.penny >> coins.nickel >> coins.dime >> coins.quarter >> coins.dollar;
	return coins;
}

int calculateTotalPennies(stCoins coins) {
	int totalPennies = (coins.penny * 1) + (coins.nickel * 5) + (coins.dime * 10) + 
					   (coins.quarter * 25) + (coins.dollar * 100);
	return totalPennies;
}

int main() {
	
	int total = calculateTotalPennies(readPennies());
	cout << "Total Pennies = " << total << endl;
	cout << "Total Dollars = " << (float)total / 100 << endl;



    return 0;
}
