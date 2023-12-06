/* Date: 06 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertAtEnd(int arr[], int &size, int val)
{
    arr[size] = val;
    size++;
}

int main()
{
    int arr[] = {1, 3, 4, 13, 10, 9, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int val;

    cout << "Enter element to insert: ";
    cin >> val;

    cout << "Before: ";
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;

    insertAtEnd(arr, size, val);

    cout << "After: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}