/* Date: 29 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findHCF(int a, int b)
{
    int hcf = (a < b) ? a : b;
    for (int i = hcf; i >= 1; i--)
    {
        if (a % i == 0 and b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{
    int num1, num2, hcf;
    cin >> num1 >> num2;
    hcf = findHCF(num1, num2);
    cout << "GCD or HCF of " << num1 << " and " << num2 << " is " << hcf << endl;
    cout << "GCD or HCF of " << num1 << " and " << num2 << " is " << __gcd(num1, num2) << endl;

    return 0;
}