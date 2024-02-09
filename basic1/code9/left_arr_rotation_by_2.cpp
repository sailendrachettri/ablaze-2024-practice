/* Date: 20 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotateByTwo(int arr[], int size)
{
    int temp;
    for (int i = 0; i < 2; i++)
    {
        temp = arr[0];

        for (int j = 0; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

int main()
{
    int arr[] = {9, 0, 8, 3, 2, 2};
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