/* Date: 18 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isBinary(int n)
{
    int temp = n;

    while (temp != 0)
    {
        int lastDigit = temp % 10;
        temp = temp / 10;

        if (lastDigit == 0 || lastDigit == 1)
            continue;
        else
            return false;
    }

    return true;
}

int main()
{
    int num;
    cin >> num;
    bool isTrue = isBinary(num);
    isTrue ? cout << "Binary" : cout << "Not Binary";

    return 0;
}