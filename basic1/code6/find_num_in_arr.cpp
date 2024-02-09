/* Date: 24 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[], int size)
{
    int count = 1;
    bool flag = false;

    for (int i = 0; i < size; i++)
    {
        if (count != arr[i])
        {
            cout << count << " is missing." << endl;
            flag = true;
            break;
        }
        count++;
    }

    if (!flag)
        cout << "No value is missing in this array." << endl;
}

int main()
{
    int arr[10] = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int size = 9;

    findMissing(arr, size);

    return 0;
}