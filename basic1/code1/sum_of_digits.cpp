/* Date: 19 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    static int sum = 0;

    sum += (n % 10);
    n = n / 10;

    if (n > 0)
        sumOfDigits(n);

    return sum;
}

int main()
{
    int n, res;
    cin >> n;
    res = sumOfDigits(n);
    cout << "Sum: " << res << endl; // 123 = 6

    return 0;
}