/*
Today: 14 - January 2024
Author: Sailendra Chettri
Purpose: Is anagram
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){
    int s1Size = s1.size();
    int s2Size = s2.size();

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main()
{
    string str1, str2;
    bool res;

    cout << "Enter two string: ";
    cin >> str1 >> str2;

    res = isAnagram(str1, str2);

    res ? cout << "Yes. It is an anagram.\n" : cout << "No. It is Not anagram.\n";

    return 0;
}