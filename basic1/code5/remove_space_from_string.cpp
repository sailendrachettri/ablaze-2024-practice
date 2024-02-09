/* Date: 18 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeWhiteSpaces(string &str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            str[i] = '\0';
        i++;
    }
}

int main()
{
    string str;
    getline(cin, str);

    removeWhiteSpaces(str);

    cout << str << endl;

    return 0;
}