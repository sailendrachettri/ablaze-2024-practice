/* Date: 05 - 12 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100] = {1, 4, 4, 3, 1, 9, 1, 98, 1};
    int size = 0;

    for (auto ele : arr)
    {
        if (ele == '\0')
            break;
        size++;
    }

    cout << "Size is " << size << endl;

    return 0;
}