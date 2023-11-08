/* Date: 08 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rev = 0, temp;
    cin >> num;

    temp = num;

    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    cout << "num: " << num << endl;
    cout << "rev: " << rev << endl;

    return 0;
}