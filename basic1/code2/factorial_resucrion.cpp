/* Date: 21 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    if (num == 0)
        return 1;

    return num * factorial(num - 1);
}

int main()
{
    int num;
    cin >> num;
    int fact = factorial(num);
    cout << fact << endl;

    return 0;
}