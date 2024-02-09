/* Date: 27 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int *arr, int size)
{
    set<int> res;

    for (int i = 0; i < size; i++)
    {
        res.insert(arr[i]);
    }

    for (auto ele : res)
    {
        cout << ele << " ";
    }
    cout << endl;
}

int main()
{
    int size;

    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    cout << "Enter element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // print array
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    removeDuplicates(arr, size);

    return 0;
}