/*
Today: 28 - December 2023
Author: Sailendra Chettri
Purpose: Check if an array is already sorted
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){

    for(int i = 0; i < size-1; i++){
        if(arr[i] > arr[i+1])
            return false;
    }

    return true;
}

int main()
{
    int res = false;
    // int arr[]= {9, 0, 4, 5, 2, 5, 4, 6};
    int arr[] = {1, 4, 5, 7, 8, 10, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for(int val : arr){
        cout << val << " ";
    } cout << endl;

    res = isSorted(arr, size);

    if(res) cout << "Array is sorted." << endl;
    else cout << "Array is Not sorted." << endl;




    return 0;
}