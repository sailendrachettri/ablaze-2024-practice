/* Date: 15 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fibonacciRecursion(int n)
{
    static int a = 0, b = 1, next;

    if (n > 0)
    {
        next = a + b;
        a = b;
        b = next;

        cout << next << " ";
        fibonacciRecursion(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << 0 << " " << 1 << " ";
    fibonacciRecursion(n);

    return 0;
}