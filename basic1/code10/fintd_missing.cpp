/*
Today: 04 - Jan 2024
Author: Sailendra Chettri
Purpose: fint missing number
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[], int size){
    int num = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] != num){
            cout << num  << " is missing." << endl;
            return;
        }
        num++;
    }

    cout << "No element is missing." << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for(auto element : arr){
        cout << element << " ";
    }cout << endl;

    findMissing(arr, size);

    return 0;
}