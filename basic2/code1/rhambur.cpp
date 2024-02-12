/*
Today: 12 - FeburarY 2024
Author: Sailendra Chettri
Purpose: Rhamboous star pattern
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter the size: "; cin >>row;

    for(int i = 0; i < row; i++){

        for(int sp = row-1; sp >= i; sp--)
            cout << " ";

        for(int j = 0; j < row; j++){
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}