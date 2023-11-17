/* Date: 17 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void seperateChar(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}

int main()
{
    string str;
    cout << "enter string: ";
    getline(cin, str);

    seperateChar(str);

    return 0;
}