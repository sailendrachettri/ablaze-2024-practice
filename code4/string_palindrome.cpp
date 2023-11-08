/* Date: 08 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    string rev = s;

    reverse(s.begin(), s.end());

    return s == rev;
}

int main()
{
    string str;
    cin >> str;

    bool isTrue = checkPalindrome(str);

    isTrue ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}