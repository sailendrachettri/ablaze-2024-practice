/* Date: 20 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumWithoutPlus(int num1, int num2)
{
    int sum = num1;

    for (int i = 1; i <= num2; i++)
    {
        sum++;
    }
    return sum;
}

int main()
{
    int num1, num2, sum;
    cin >> num1 >> num2;

    sum = sumWithoutPlus(num1, num2);

    cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}