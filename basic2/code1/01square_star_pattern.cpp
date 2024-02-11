/*
Today: 11 - FeburarY 2024
Author: Sailendra Chettri
Purpose: Square star patter
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter a row: "; cin >> row;

    for(int i = 0; i < row; i++){
        for(int i = 0; i < row; i++){
            cout << " * ";
        }
        cout << endl;
    }


    return 0;
}