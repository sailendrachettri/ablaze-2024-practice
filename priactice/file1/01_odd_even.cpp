/*
Today: 29 - December 2023
Author: Sailendra Chettri
Purpose: Odd Even without %
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    cout << "Enter a num: ";
    cin >> num;

    if(num & 1) cout <<  num << " is Odd\n";
    else cout << num << " is Even\n";

    return 0;
}