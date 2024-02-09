/* Date: 13 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
        return false;

    bool flag = true;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{
    int n;
    cin >> n;
    bool isPrime = checkPrime(n);

    isPrime ? cout << n << " is Prime." : cout << n << " is not Prime.";

    return 0;
}