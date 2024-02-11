/*
Today: 11 - FeburarY 2024
Author: Sailendra Chettri
Purpose: Hollo quare pattern with diagonals
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter a row size: "    ; cin >> row;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            if(i == j || i == row-1 or j+i == row-1 or j == row-1 || i == 0 || j == 0)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }

    return 0;
}