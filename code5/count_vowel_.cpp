/* Date: 14 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countVowel(string str)
{
    int count = 0;
    int len = str.length();

    for (char ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string str;
    getline(cin, str);

    cout << "Total char: " << str.length() << endl;
    int total = countVowel(str);

    cout << "Vowal only: " << total << endl;

    return 0;
}