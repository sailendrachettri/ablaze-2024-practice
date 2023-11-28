/* Date: 28 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void checkNotPresent(int arr1[], int arr2[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr1[i] - arr2[i];

    cout << sum << " is missing element" << endl;
}

int main()
{
    int arr1[5] = {1, 4, 3, 2, 5};
    int arr2[5] = {1, 0, 3, 2, 5};
    int size = 5;

    display(arr1, size);
    display(arr2, size);
    checkNotPresent(arr1, arr2, size);

    return 0;
}