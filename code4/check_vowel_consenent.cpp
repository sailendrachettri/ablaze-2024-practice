/* Date: 09 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkVowel(char ch)
{
    ch = tolower(ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}

int main()
{
    char ch;
    cin >> ch;

    bool isVowel = checkVowel(ch);
    if (isVowel)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}