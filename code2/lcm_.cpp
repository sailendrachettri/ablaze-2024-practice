/* Date: 28 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findLCM(int a, int b)
{
    int max = (a > b) ? a : b;

    for (int i = max; i <= a * b; i += max)
    {
        if (i % a == 0 and i % b == 0)
            return i;
    }

    return -1;
}

int main()
{
    int a, b, lcm;
    cin >> a >> b;
    lcm = findLCM(a, b);
    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;

    return 0;
}