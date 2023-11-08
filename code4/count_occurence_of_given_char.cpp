/* Date: 06 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countChar(string str, char ch)
{
    int count = 0, size = str.size();

    while (size != 0)
    {
        if (ch == str[size])
            count++;
        size--;
    }
    return count;
}

int main()
{
    string str;
    char ch;
    cin >> str >> ch;
    int count = countChar(str, ch);
    cout << count << " times." << endl;

    return 0;
}