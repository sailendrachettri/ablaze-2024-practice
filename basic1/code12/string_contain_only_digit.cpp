/*
Today: 20 - January 2024
Author: Sailendra Chettri
Purpose: Check if a string contains only digits
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// bool checkDigit(string str){
//     for(int i = 0; i < str.size(); i++){
//         if(str[i] >= '0' && str[i] <= '9')
//             continue;
//         else   
//             return false;
//     }
//     return true;
// }

bool isAllDigit(string str){
    for(char c : str){
        if(!isdigit(c))
            return false;
    }
    
    return true;    
}

int main()
{
    string str;
    bool res;

    cout << "Enter string: ";
    cin >> str;

    // res = checkDigit(str);
    res = isAllDigit(str);

    res ? cout << "Yes, it contains only digits.\n" : cout << "No, its alphanmberic.\n";

    return 0;
}