/*
Today: 16 - FeburarY 2024
Author: Sailendra Chettri
Purpose: Halp triangle
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 10;
    // int row;
    // cout << "Enter the row size: "; cin >> row;

    for(int i = 0; i < row; i++){
        for(int j = 0; j <= i; j++){
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}