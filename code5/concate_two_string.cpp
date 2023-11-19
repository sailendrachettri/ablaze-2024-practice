/* Date: 19 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string concatenateStrings(string str1, string str2)
{
    string res = str1;

    res.push_back(' ');
    for (char c : str2)
    {
        res.push_back(c);
    }

    return res;
}

int main()
{
    string str1, str2, result;
    cout << "Enter string 1: ";
    getline(cin, str1);

    cout << "Enter string 2: ";
    getline(cin, str2);

    result = concatenateStrings(str1, str2);

    cout << result << endl;

    return 0;
}