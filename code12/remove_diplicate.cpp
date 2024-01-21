/*
Today: 21 - January 2024
Author: Sailendra Chettri
Purpose: Remove duplicates characters from a string using C++
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(string str){
    string newStr = "";
    bool isUnique;

    for(int i = 0; i < str.size(); i++){
        isUnique = true;

        for(int j = i+1; j < str.size(); j++){
            if(str[i] == str[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique)
            str[i] != ' ' ? newStr += str[i] : "";
    }

    cout << "Result: " << newStr << endl;
}

int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    removeDuplicates(str);

    return 0;
}