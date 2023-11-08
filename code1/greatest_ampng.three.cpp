/* Date: 17 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int amongThree(int a, int b, int c)
{
    return (a > b && a > c) ? a : (b > c) ? b
                                          : c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = amongThree(a, b, c);
    cout << max << endl;

    return 0;
}