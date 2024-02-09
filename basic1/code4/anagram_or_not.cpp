/* Date: 07 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout << s1 << " " << s2 << endl;

    return s1 == s2;
}

int main()
{
    string str1, str2;

    cin >> str1 >> str2;

    bool isAnagram = checkAnagram(str1, str2);

    isAnagram ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}