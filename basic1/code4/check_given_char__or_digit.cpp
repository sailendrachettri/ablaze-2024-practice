/* Date: 09 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkDigit(char ch)
{
    switch (ch)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        return true;
    default:
        return false;
    }
}

int main()
{
    char ch;
    cin >> ch;

    bool isDigit = checkDigit(ch);
    if (isDigit)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}