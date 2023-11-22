/* Date: 22 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void displayNonRepeating(string str)
{
    set<char> st;

    for (int i = 0; i < str.length(); i++)
    {

        st.insert(tolower(str[i]));
    }

    for (char val : st)
    {
        cout << val << " ";
    }
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    displayNonRepeating(str);

    return 0;
}