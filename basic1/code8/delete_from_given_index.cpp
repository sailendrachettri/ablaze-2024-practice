/* Date: 09 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void deleteFromIndex(int arr[], int &size, int index)
{

    if (index >= size)
    {
        cout << "Out of index So, no element was deleted" << endl;
        return;
    }

    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;
}

int main()
{
    int arr[] = {10, 49, 50, 19, 23, 11, 52};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index;

    cout << "Before: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter Index to delete element: ";
    cin >> index;

    deleteFromIndex(arr, size, index);

    cout << "After: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}