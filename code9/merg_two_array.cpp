/* Date: 21 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mergeTwoArray(int arr1[], int s1, int arr2[], int s2){
    int mergedArr[s1+s2];
    int temp;

    for(int i = 0; i < s1; i++){
        mergedArr[i] = arr1[i];
    }

    temp = s1;
    for(int i = 0; i < s1; i++){
        mergedArr[temp++] = arr2[i];
    }

    cout << "Merged Array: ";
    for(auto ele : mergedArr){
        cout << ele << " ";
    }cout << endl;
}


int main()
{
    int arr1[] = {9, 0, 8, 3, 2};
    int arr2[] = {2, 4, 0, 5, 4};
    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Arr1: ";
    for (int ele : arr1)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << "Arr2: ";
    for (int ele : arr2)
    {
        cout << ele << " ";
    }
    cout << endl;

    mergeTwoArray(arr1, s1, arr2, s2);

    return 0;
} 