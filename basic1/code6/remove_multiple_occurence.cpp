/* Date: 20 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    set<char> st;
    cout << "Enter string: ";
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        st.insert(str[i]);
    }

    for (auto ele : st)
    {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}