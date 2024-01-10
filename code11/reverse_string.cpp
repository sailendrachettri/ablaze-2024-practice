/*
Today: 10 - January 2024
Author: Sailendra Chettri
Purpose: reverse a string
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void revStr(string &name){
    char temp;
    int first = 0;
    int last = name.size() - 1;

    while(first <= last){
        temp = name[first];
        name[first] = name[last];
        name[last] = temp;
        first++; last--;
    }    
}

int main()
{
    string name;

    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Original Name: " << name << endl;

    revStr(name);

    cout << "Reversed Name: " << name << endl;

    return 0;
}