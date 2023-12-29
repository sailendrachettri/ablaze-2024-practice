/*
Today: 29 - December 2023
Author: Sailendra Chettri
Purpose: Find unique element from an array
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {9, 4, 5, 0, 1, 4, 2, 4, 5, 0};

    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    for(auto val : arr){
        cout << val << " ";
    }cout << endl;
    

    return 0;
}