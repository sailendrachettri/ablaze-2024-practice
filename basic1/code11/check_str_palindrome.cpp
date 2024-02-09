/*
Today: 11 - January 2024
Author: Sailendra Chettri
Purpose: Check wheather a string palindrome or not
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void strPalindrome(string str){
    int start = 0;
    int end = str.size() - 1;

    // lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    while(start < end){
        if(str[start] != str[end]){
            cout << str << " is NOT palindrome.\n";
            return;
        }
        start++; end--;
    }

    cout << str << " is paindrome.\n";
}

int main()
{
    string str;

    cout << "Enter your string: ";
    cin >> str;

    strPalindrome(str);
    
    return 0;
}