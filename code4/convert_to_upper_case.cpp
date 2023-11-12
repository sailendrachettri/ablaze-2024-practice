/* Date: 12 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void converterCases(string &s1)
{

    for (char &ch : s1)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
    }
}

int main()
{
    string str;
    getline(cin, str);

    cout << "original: " << str << endl;
    converterCases(str);
    cout << "converted: " << str << endl;

    return 0;
}