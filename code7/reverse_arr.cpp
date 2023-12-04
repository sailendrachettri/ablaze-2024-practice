/* Date: 04 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size)
{
    int i = 0, j = size - 1;
    int temp;
    while (i < j)
    {

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int arr[100] = {1, 31, 4, 5, 9, 1, 4, 5, 2};
    int size = 9;

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}