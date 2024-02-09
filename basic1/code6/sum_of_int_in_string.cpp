/* Date: 21 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calculateSum(string s)
{
    int sum = 0;
    for (auto ch : s)
    {
        if (ch >= '1' && ch <= '9')
        {
            int temp = stoi(&ch);
            sum += temp;
        }
    }

    return sum;
}

int main()
{
    string str;
    int res;
    cout << "Enter string: ";
    getline(cin, str);

    res = calculateSum(str);

    cout << "Sum: " << res;

    return 0;
}