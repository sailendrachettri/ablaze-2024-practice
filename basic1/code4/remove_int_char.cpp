/* Date: 05 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeInteger(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
        {
            str[i] = '\0';
        }
    }
}

int main()
{
    string str;
    cin >> str;
    cout << "Str: " << str << endl;

    removeInteger(str);

    cout << "Str: " << str << endl;
    return 0;
}