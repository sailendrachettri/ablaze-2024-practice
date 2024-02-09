/*
Today: 29 - December 2023
Author: Sailendra Chettri
Purpose: Merged two sorted array
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void mergedArr(int a1[], int a2[], int s1, int s2){
    int arr[s1+s2];
    int temp = s1, i = 0, j = 0;

    while(temp != 0){
        arr[i] = a1[i];
        i++;
        temp--;
    }

    temp = s2;
    while(temp != 0){
        arr[i] = a2[j];
        i++; j++;
        temp--;
    }

    cout << "Merged: ";
    for(auto val : arr){
        cout << val << " ";
    }cout <<endl;
}

int main()
{
    int arr1[]= {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Array1: ";
    for(int val : arr1){
        cout << val << " ";
    } cout << endl;

    cout << "Array2: ";
    for(int val : arr2){
        cout << val << " ";
    } cout << endl;

    mergedArr(arr1, arr2, size1, size2);

    return 0;
}