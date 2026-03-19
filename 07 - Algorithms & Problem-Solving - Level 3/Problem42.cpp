#include <string>
#include <iostream>
#include <vector>

using namespace std;

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sReplaceTo)
{
    int pos = S1.find(StringToReplace);

    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, StringToReplace.length(), sReplaceTo);
        pos = S1.find(StringToReplace);
    }
    return S1;
}

int main()
{
    string S1 = "Welcome to Jordan , Jordan is a nice country"; // 11 > 16 = 5
    string StringToReplace = "Jordan";
    string ReplaceTo = "USA";

    cout << "\nOriginal String\n" << S1;
    cout << "\n\nString After Replace:";
    cout << "\n" << ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo);

    system("pause>0");
    return 0;
}