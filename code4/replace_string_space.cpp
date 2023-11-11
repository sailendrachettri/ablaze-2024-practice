/* Date: 11 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void replaceSpace(string &str, char ch)
{
    string temp = str;

    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            str[i] = ch;
    }
}

int main()
{
    string str;
    char ch;
    getline(cin, str);
    cin >> ch;

    replaceSpace(str, ch);
    cout << "after: " << str << endl;

    return 0;
}