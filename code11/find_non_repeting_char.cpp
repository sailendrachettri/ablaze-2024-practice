/*
Today: 13 - January 2024
Author: Sailendra Chettri
Purpose: Find the first non-repeating character from a string using C++
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

char firstNonRChar(string str){
    unordered_map<char, int> charCount;

    for (char ch : str)
        charCount[ch]++;

    for (char ch : str)
        if (charCount[ch] == 1)
            return ch;

    return '\0';
}

int main()
{
    string str;
    char res;

    cout << "Enter your string: ";
    cin >> str;

    res = firstNonRChar(str);

    cout << res << " is the first non-repeating char.\n";

    return 0;
}