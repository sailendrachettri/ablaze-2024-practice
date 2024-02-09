/* Date: 06 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertAtAny(int arr[], int size, int val, int pos)
{
    for (int i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
}

int main()
{
    int arr[] = {1, 3, 4, 13, 10, 9, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int val, pos;

    cout << "Enter position and value: ";
    cin >> pos >> val;

    cout << "Before: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertAtAny(arr, size, val, pos);

    cout << "After: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}