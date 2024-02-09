/* Date: 19 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printOddElements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!(arr[i] % 2 == 0))
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 4, 5, 11, 10, 19, 7, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original element: ";
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    cout << "Only odd elements: ";
    printOddElements(arr, size);

    return 0;
}