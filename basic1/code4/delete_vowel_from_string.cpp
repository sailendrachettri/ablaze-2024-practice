/* Date: 13 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void deleteVowel(string &str)
{
    int len = str.length();

    for (char &ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            ch = '\0';
            // ch = '-';
        }
    }
}

int main()
{
    string str;
    getline(cin, str);

    cout << "before: " << str << endl;
    deleteVowel(str);

    cout << "after: " << str << endl;

    return 0;
}