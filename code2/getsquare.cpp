/* Date: 26 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float squareRoot(int n)
{
    float i = 0.01;

    while (i * i < n)
    {
        i = i + 0.01;
    }

    return i;
}

int main()
{
    int num;
    cin >> num;
    float res = squareRoot(num);
    // cout << "Square root of " << setprecision(2) << num << " is " << res << endl;
    cout << setprecision(3) << res << endl;

    return 0;
}