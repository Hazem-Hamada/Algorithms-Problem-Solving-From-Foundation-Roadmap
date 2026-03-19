#include <string>
#include <iostream>

using namespace std;

string ReadString()
{
    string S1;
    cout << "\nPlease Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

void CountWord(string S)
{
    string delim = " ";
    int counter = 0;

    short pos = 0;
    string sWord;

    while ((pos = S.find(delim)) != std::string::npos)
    {
        sWord = S.substr(0, pos);

        if (sWord != "")
        {
            counter++;
        }
        S.erase(0, pos + delim.length());
    }
    if (S != "") counter++;

    cout << "The number of words in string : " << counter << endl;
}


int main()
{
    string S = ReadString();

    CountWord(S);

    system("pause>0");
    return 0;
}