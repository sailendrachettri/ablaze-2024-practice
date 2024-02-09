/* Date: 01 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void secondLargest(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "2nd Largest: " << arr[size - 2] << endl;
}

int main()
{

    int arr[10] = {9, 5, 21, 12, 1, 8, 15, 14, 10};
    int size = 9;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    secondLargest(arr, size);

    return 0;
}