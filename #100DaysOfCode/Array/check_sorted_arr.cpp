/*
Today: 22 - December 2023
Author: Sailendra Chettri
Purpose: Check if array is sorted
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int isSorted = true;
    // int arr[] = {9, 0, 2, 4, 5, 6, 6};
    int arr[] = {11, 5, 4, 2, 1, 1, 1, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size-1; i++){
        if(arr[i] < arr[i+1]){
            isSorted = false;
            break;
        }
    }

    isSorted ? cout << "Sorted\n" : cout << "Not Sorted\n";

    return 0;
}