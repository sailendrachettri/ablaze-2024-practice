/* Date: 11 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sumOfElements(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "The sum is " << sum << endl;
}

int main()
{
    int arr[] = {1, 3, 11, 5, 1, 4, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (auto ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    sumOfElements(arr, size);

    return 0;
}