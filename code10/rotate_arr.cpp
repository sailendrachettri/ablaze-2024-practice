/*
Today: 04 - December 2023
Author: Sailendra Chettri
Purpose: Roate an array by given degree
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void rotateByDegree(int arr[], int size, int degree){
    for(int i = 0; i < degree; i++){
        for(int j = 0; j < size-1; j++){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

int main()
{
    int degree;
    int arr[] = {9, 5, 8, 3, 2, 2, 4, 0, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter degree: ";
    cin >> degree;

    cout << "Original array: ";
    for(auto val : arr)
        cout << val <<" ";
    cout << endl;

    rotateByDegree(arr, size, degree);

    cout << "Rotated array:  ";
    for(auto val : arr)
        cout << val <<" ";
    cout << endl;
    return 0;
}