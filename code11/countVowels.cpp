/*
Today: 12 - January 2024
Author: Sailendra Chettri
Purpose: Count vowels and consonent from griven string
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void countVowCon(string str){
    int vowels = 0;
    int consonent = 0;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        else
            consonent++;
    }

    cout << "The " << str << " has " << vowels << " vowels and " << consonent << " consonent.\n";
}

int main()
{
    string str;

    cout << "Enter your string: ";
    cin >> str;

    countVowCon(str);

    return 0;
}