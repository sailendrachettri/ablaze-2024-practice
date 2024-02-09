/* Date: 09 - 10 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool armstrong(int num)
{
    int temp, numOfDigits, sum;

    sum = 0;
    temp = num;
    numOfDigits = to_string(num).length();

    while (temp != 0)
    {
        sum += pow(temp % 10, numOfDigits);
        temp /= 10;
    }

    return num == sum;
}

int main()
{
    int num;
    cin >> num;

    bool isArmstrong = armstrong(num);

    cout << "isArmstrong: " << isArmstrong << endl;

    return 0;
}