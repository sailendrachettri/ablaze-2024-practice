/* Date: 02 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int size, int arr[], int value)
{
    int lower, upper, middle, location = -1;

    lower = 0, upper = size - 1;

    while (lower <= upper)
    {
        middle = (lower + upper) / 2;

        if (value == arr[middle])
        {
            location = middle;
            break;
        }
        else if (value < arr[middle])
            upper = middle - 1;

        else
            lower = middle + 1;
    }

    return location;
}

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13};
    int size = 7, value;

    cout << "Enter value to search: ";
    cin >> value;
    int ind = binarySearch(size, arr, value);

    cout << "Value " << value << " found at index " << ind << endl;

    return 0;
}