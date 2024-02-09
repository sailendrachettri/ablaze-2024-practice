/* Date: 08 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void deleteAtEnd(int arr[], int &size)
{
    int val;
    val = arr[size - 1];
    cout << "Deleted element is " << val << endl;
    size--;
}

int main()
{
    int arr[] = {2, 5, 4, 2, 10, 5, 45, 2, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    deleteAtEnd(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}