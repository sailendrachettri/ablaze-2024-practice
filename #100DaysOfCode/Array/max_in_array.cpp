/*
Today: 13 - December 2023
Author: Sailendra Chettri
Purpose: Maximum element in an array
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9, 8, 4, 1, 3, 4, 1, 2, 3, 9, 0, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // log to find maximum element
    int max = arr[0];

    for(int i = 0; i < size; i++)
        if(max < arr[i])
            max = arr[i];
    

    cout << "The max element is " << max << endl;

    return 0;
}