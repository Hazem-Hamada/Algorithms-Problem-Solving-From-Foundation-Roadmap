#include <iostream>
#include <string>
using namespace std;

string ReadPassword()
{
    string Password;

    cout << "Please enter a 3-Letter Password (all capital)?\n";
    cin >> Password;

    return Password;
}

bool GuessPassword(string OriginalPassword)
{
    string word = "";
    int Counter = 0;

    cout << "\n";

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                Counter++;

                cout << "Trial [" << Counter << "] : " << word << endl;

                if (word == OriginalPassword)
                {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after " << Counter << " Trial(s)\n";

                    return true;
                }

                word = "";
            }
        }
    }

    return false;
}

int main()
{
    bool result = GuessPassword(ReadPassword());

    return 0;
}


=========================================

#include <iostream>
#include <string>
using namespace std;

bool checkPasswordDigitNumber(string passsword, int digit) { // 1- Check if password = 3 Digit only 

    int length = passsword.length(); // 3

    if (length == digit) {
        return 1;
    }
    else {
        return 0;
    }

}

bool checkIfPasswordIsString(string password) { // 2- Check if password is string only

    for (int i = 0; i < password.length(); i++) {

        if (char(password[i]) < 65 || char(password[i]) > 90) {
            return 0;
        }
    }
    return 1;
}

string readPassword(string message) { // AAA --> ZZZ 

    string password;
    do {
        cout << message << endl;
        cin >> password;

    } while (!(checkPasswordDigitNumber(password, 3) && checkIfPasswordIsString(password)));

    return password;
}

bool GuessPassword(string OriginalPassword)
{
    string word = "";
    int Counter = 0;

    cout << "\n";

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                Counter++;

                cout << "Trial [" << Counter << "] : " << word << endl;

                if (word == OriginalPassword)
                {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after " << Counter << " Trial(s)\n";

                    return true;
                }

                word = "";
            }
        }
    }

    return false;
}

int main()
{

    GuessPassword(readPassword("Enter password only from AAA to ZZZ : "));

    return 0;
}

=====================================

MORE BETTER


=====================================



#include <iostream>
#include <string>
using namespace std;

bool checkPasswordLength(const string& password, int lengthExpected) {
    return password.length() == lengthExpected;
}

bool checkPasswordIsUppercase(const string& password) {
    for (char c : password) {
        if (c < 'A' || c > 'Z')
            return false;
    }
    return true;
}

string readPassword(const string& message) {
    string password;
    do {
        cout << message;
        cin >> password;
    } while (!(checkPasswordLength(password, 3) &&
        checkPasswordIsUppercase(password)));

    return password;
}

bool GuessPassword(const string& OriginalPassword) {
    string word;
    int Counter = 0;

    for (int i = 'A'; i <= 'Z'; i++) {
        for (int j = 'A'; j <= 'Z'; j++) {
            for (int k = 'A'; k <= 'Z'; k++) {

                word = "";
                word += char(i);
                word += char(j);
                word += char(k);

                Counter++;

                if (word == OriginalPassword) {
                    cout << "Password is: " << word << endl;
                    cout << "Found after " << Counter << " trial(s)\n";
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    GuessPassword(readPassword("Enter password (AAA - ZZZ): "));
    return 0;
}
