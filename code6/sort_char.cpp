/* Date: 23 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortChar(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str.size() - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main()
{
    string str;
    getline(cin, str);

    sortChar(str);

    cout << str << endl;

    return 0;
}