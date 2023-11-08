/* Date: 04 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double P, R, T, I;

    cout << "Enter the principal amount: ";
    cin >> P;

    cout << "Enter the rate of interest: ";
    cin >> R;

    cout << "Enter the time in years: ";
    cin >> T;

    I = (P * R * T) / 100;

    cout << "The simple interest is: " << I << endl;

    return 0;
}