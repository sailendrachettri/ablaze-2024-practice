/*
Today: 19 - January 2024
Author: Sailendra Chettri
Purpose: Count number of time a character is occur in given string
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int countCh(string str, char ch){
    int times = 0;
    char lowerCh;

    for(int i = 0; i < str.size(); i++){
        lowerCh = tolower(str[i]);

        if(lowerCh == ch)
            times++;
    }
    return times;
}

int main()
{
    string str;
    char ch;
    int times;

    cout << "Enter string: ";
    getline(cin , str);

    cout << "Enter character to count: ";
    cin >> ch;

    times = countCh(str, ch);

    cout << ch << " occur " << times << " times in above string.\n";

    return 0;
}