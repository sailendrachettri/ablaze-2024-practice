/* Date: 13 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printEvenElement(int arr[], int size)
{
    cout << "Even elements are: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 14, 3, 2, 5, 3, 9, 4, 2, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    printEvenElement(arr, size);

    return 0;
}