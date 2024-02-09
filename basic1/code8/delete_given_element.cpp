/* Date: 09 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void deleteGivenElement(int arr[], int &size, int element)
{
    int pos = -1;

    // identify the position of element
    for (int i = 0; i < size; i++)
        if (element == arr[i])
            pos = i;

    // checking if element is present or not
    if (pos == -1)
    {
        cout << "Element not found" << endl;
        return;
    }

    // if element is there the delete it
    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main()
{
    int arr[] = {1, 4, 5, 9, 3, 11, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element;

    cout << "Before: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter element to delete: ";
    cin >> element;

    deleteGivenElement(arr, size, element);

    cout << "After: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}