/*
Today: 18 - January 2024
Author: Sailendra Chettri
Purpose: Replace space with -
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void replaceWithChar(string &str){
    for(int i = 0; i < str.size(); i++)
        if(str[i] == ' ')
            str[i] = '-';
}

int main()
{
    string str;
    
    cout << "Enter the string: ";
    getline(cin, str);

    replaceWithChar(str);

    cout << "Resultant string: " << str << endl;

    return 0;
}