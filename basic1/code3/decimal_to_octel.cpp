/* Date: 31 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void decimalToOctel(int n)
{
    vector<int> arr;

    while (n != 0)
    {
        arr.push_back(n % 8);
        n = n / 8;
    }

    reverse(arr.begin(), arr.end());

    cout << 0; // octal number starts with 0
    for (int val : arr)
    {
        cout << val;
    }
}

int main()
{
    int n;
    cin >> n;
    decimalToOctel(n);

    return 0;
}