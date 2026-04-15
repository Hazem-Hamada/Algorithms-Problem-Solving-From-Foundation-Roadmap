#include <iostream>
#include <string>
#include <vector>

using namespace std;

// --- Structures ---

struct stDate {
    short Year;
    short Month;
    short Day;
};

// --- String Utilities ---

vector<string> SplitString(string S1, string Delim) {
    vector<string> vString;
    short pos = 0;
    string sWord;

    // use find() function to get the position of the delimiters
    while ((pos = S1.find(Delim)) != std::string::npos) {
        sWord = S1.substr(0, pos);
        if (sWord != "") {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "") {
        vString.push_back(S1); // adds the last word of the string
    }

    return vString;
}

// --- Conversion Functions ---

string DateToString(stDate Date) {
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

stDate StringToDate(string DateString) {
    stDate Date;
    vector<string> vDate;

    vDate = SplitString(DateString, "/");

    Date.Day = stoi(vDate[0]);
    Date.Month = stoi(vDate[1]);
    Date.Year = stoi(vDate[2]);

    return Date;
}

// --- Input Functions ---

string ReadStringDate(string Message) {
    string DateString;
    cout << Message;
    getline(cin >> ws, DateString);
    return DateString;
}

// --- Main ---

int main() {
    string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? ");

    stDate Date = StringToDate(DateString);

    cout << "\nDay:" << Date.Day << endl;
    cout << "Month:" << Date.Month << endl;
    cout << "Year:" << Date.Year << endl;

    cout << "\nYou Entered: " << DateToString(Date) << "\n";

    system("pause>0");
    return 0;
}