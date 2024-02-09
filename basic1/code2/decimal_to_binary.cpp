/* Date: 30 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void binaryToDecimal(int n)
{
    vector<int> arr;

    while (n > 0)
    {
        arr.push_back(n % 2);
        n = n / 2;
    }

    reverse(arr.begin(), arr.end());

    for (int val : arr)
    {
        cout << val;
    }
}

int main()
{
    int num;
    cin >> num;
    binaryToDecimal(num);

    return 0;
}