/* Date: 01 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool leapYear(int year)
{
    if (year % 400 == 0)
        return true;

    else if (year % 100 == 0)
        return false;

    else if (year % 4 == 0)
        return true;

    else
        return false;
}

int main()
{
    int year;
    cin >> year;
    bool isLeap = leapYear(year);
    isLeap ? cout << "Yes\n" : cout << "No\n";

    return 0;
}