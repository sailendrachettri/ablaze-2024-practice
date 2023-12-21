/* Date: 20 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotateByTwo(int arr[], int size)
{
    int temp;

    for(int i = 0; i < 2; i++){
        temp = arr[size-1];
        for(int j = size-1; j > 0; j--){
            arr[j] = arr[j-1];
        }
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original: ";
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    rotateByTwo(arr, size);

    cout << "Rotated:  ";
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
} 