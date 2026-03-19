#include <string>
#include <iostream>
#include <vector>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}


string RemoveAllPunctuations(string s)
{
	string s2 = "";

	for (int i = 0; i < s.length(); i++)
	{
		if (!ispunct(s[i]))
		{
			s2 += s[i];
		}
	}
	return s2;
}


int main()
{
	string s = ReadString();

	cout << "\nNew string after remove all Punctuations\n";
	cout << RemoveAllPunctuations(s);

    system("pause>0");
    return 0;
}