/* Date: 21 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool oddEven(int num)
{
    return num & 1;
}

int main()
{
    int num;
    cin >> num;
    bool isOddOrEven = oddEven(num);

    isOddOrEven ? cout << "Odd" : cout << "Even";

    return 0;
}