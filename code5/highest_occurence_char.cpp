/* Date: 15 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    vector<int> freq(256, 0);

    cout << "Enter string: ";
    getline(cin, str);

    int len = str.length();
    int max = 0, result;

    for (int i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    for (int i = 0; i < len; i++)
    {
        if (max <= freq[str[i]])
        {
            max = freq[str[i]];
            result = str[i];
        }
    }

    cout << (char)result << " " << max << " times." << endl;

    return 0;
}