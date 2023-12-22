/*
Today: 22 - December 2023
Author: Sailendra Chettri
Purpose: Reverse an array
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, start, end, temp = 0;
    cout << "\nEnter size: ";
    cin >> size;

    int arr[size];

    cout << "\nEnter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    start = 0; end = size - 1;

    while(start <= end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }

    cout << "\nArray elements: ";
    for(int i = 0; i < size; i++){
        cout << arr[i]<< " ";
    } cout << endl;



    return 0;
}