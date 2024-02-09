/* Date: 26 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void firstDuplicate(vector<int> v, int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (v[i] == v[j])
            {
                cout << v[i] << " is the first duplicate element\n";
                return;
            }
        }
    }
}

int main()
{
    int size, element;
    vector<int> v;

    cout << "Enter size: ";
    cin >> size;

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    firstDuplicate(v, size);

    return 0;
}