/*
Today: 22 - December 2023
Author: Sailendra Chettri
Purpose: Sum of all elements in an array
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, sum = 0;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];


    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    cout << "The sum is " << sum << endl;

    return 0;
}