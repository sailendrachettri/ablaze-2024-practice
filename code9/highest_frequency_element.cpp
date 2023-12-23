/*
Today: 23 - December 2023
Author: Sailendra Chettri
Purpose: Find the highest frequency element
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void highestFreq(int arr[], int size){
    int maxElement = arr[0];
    int maxCount = 1;

    for(int i = 0; i < size; i++){
        int count = 1;
        for(int j = i + 1; j < size; j++){
            if(arr[j] == arr[i]){
                count++;
                if(count > maxCount){
                    maxElement = arr[j];
                    maxCount = count;
                }
            }
        }
    }

    cout << "Max frequency element: " << maxElement << ", occurrence= " << maxCount << " times" << endl;
}

int main()
{
    int arr[] = {11, 2, 2, 3, 2, 4, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    highestFreq(arr, size);

    return 0;
}