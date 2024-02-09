/* Date: 21 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int res = 1;

    for (int i = 1; i <= num; i++)
    {
        res = res * i;
    }
    return res;
}

int main()
{
    int num;
    cin >> num;
    int fact = factorial(num);
    cout << fact << endl;

    return 0;
}