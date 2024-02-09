/* Date: 29 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sameSizeArray(int arr1[], int arr2[])
{
    int arr1Size = 0, arr2Size = 0, i = 0;

    while (arr1[i] != '\0')
    {
        arr1Size++;
        i++;
    }
    i = 0;
    while (arr2[i] != '\0')
    {
        arr2Size++;
        i++;
    }

    (arr1Size == arr2Size)
        ? cout << "Same Size Array"
        : cout << "Nope";
}

int main()
{
    int arr1[100] = {1, 2, 3, 4, 5, 3, 5};
    int arr2[100] = {11, 1, 2, 3, 4, 5, 9};

    sameSizeArray(arr1, arr2);

    return 0;
}