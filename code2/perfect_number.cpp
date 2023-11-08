/* Date: 21 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkForPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    return num == sum;
}

int main()
{
    int num;
    cin >> num;
    bool isPerfect = checkForPerfect(num);
    isPerfect ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}