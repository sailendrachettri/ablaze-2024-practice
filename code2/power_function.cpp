/* Date: 26 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int myPower(int base, int exp)
{
    int res = base;

    for (int times = 1; times < exp; times++)
        res = res * base;

    return res;
}

int main()
{
    int base, exp, res;
    cin >> base >> exp;
    res = myPower(base, exp);
    cout << base << " to the power of " << exp << " is " << res << endl;

    return 0;
}