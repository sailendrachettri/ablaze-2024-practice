/* Date: 21 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void firstNPrime(int range)
{
    for (int n = 2; n <= range; n++)
    {
        bool flag = true;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << n << " ";
    }
}

int main()
{
    int num;
    cin >> num;
    firstNPrime(num);

    return 0;
}