/*
Today: 14 - FeburarY 2024
Author: Sailendra Chettri
Purpose: Hollow Rhambous
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 10;
    // cout << "Enter a row size: ";
    // cin >> row;

    for(int i = 0; i < row; i++){

        for(int sp = row-1; sp >= i; sp--)
            cout << " ";

        for(int j = 0; j < row; j++){
            if(i == row-1 || j == 0 || i == 0 || j == row-1)
                cout << " * ";
            else cout << "   ";
        }
        cout << endl;
    }

    return 0;
}