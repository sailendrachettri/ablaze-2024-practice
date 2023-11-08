/* Date: 16 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPlindrome(int n)
{
    int temp, rev = 0;
    temp = n;
    while (temp != 0)
    {
        rev = 10 * rev + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main()
{
    int n;
    cin >> n;
    bool isPalindrome = checkPlindrome(n);
    isPalindrome ? cout << "Yes." : cout << "No.";

    return 0;
}