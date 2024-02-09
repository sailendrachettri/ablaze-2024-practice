/* Date: 25 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countRepeatedTimes(vector<int> v, int n)
{
    // printing vector
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v.at(i) == v.at(j))
                count++;
        }
        cout << v.at(i) << " contains " << count << " times\n";
        count = 0;
    }
    cout << endl;
}

int main()
{
    int n;
    vector<int> v;

    cout << "Enter size: ";
    cin >> n;

    // taking input elements
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    countRepeatedTimes(v, n);

    return 0;
}