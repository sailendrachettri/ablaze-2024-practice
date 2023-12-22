/*
Today: 22 - December 2023
Author: Sailendra Chettri
Purpose: Find the minimum element array
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, min;

    cout << "\nEnter size: ";
    cin >> size;

    int arr[size];

    cout << "\nEnter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // find the minimum
    min = arr[0];
    for(int i = 0; i < size; i++)
        if(arr[i] < min)
            min = arr[i];
    
    cout << "Minimum element is " << min << endl;

    return 0;
}