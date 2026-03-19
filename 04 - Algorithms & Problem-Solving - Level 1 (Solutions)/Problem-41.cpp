#include <iostream>
#include <string>

using namespace std;

void printLetterFromAtoZ() {

    for (int i = 65; i <= 90; i++) {
        cout << char(i) << endl;
    }
}

int main()
{
    printLetterFromAtoZ();

    return 0;
}