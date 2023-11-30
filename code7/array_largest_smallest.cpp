/* Date: 30 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void getSmallestLargest(int arr[], int size)
{
    int sm = arr[0];
    int lg = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > lg)
            lg = arr[i];

        else if (arr[i] < sm)
            sm = arr[i];
    }

    cout << "Smallest: " << sm << endl;
    cout << "Largest: " << lg << endl;
}

int main()
{
    int arr[10] = {9, 5, 21, 12, 11, 8, 5, 14, 10};
    int size = 8;

    getSmallestLargest(arr, size);

    return 0;
}