/* Date: 14 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printFibonacci(int n)
{
    int a = 0, b = 1;
    int next;

    cout << a << " " << b << " ";

    while (n != 0)
    {
        next = a + b;
        cout << next << " ";

        a = b;
        b = next;
        n--;
    }
}

int main()
{
    int n;
    cin >> n;
    printFibonacci(n);

    return 0;
}