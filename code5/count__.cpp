/* Date: 16 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countDiffChars(string str)
{

    int length = str.length();
    int num = 0, ch = 0, sym = 0;

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            num++;
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            ch++;
        else
            sym++;
    }

    cout << "In this line there are " << num << " numbers " << ch << " characters and " << sym << " symbols." << endl;
}

int main()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);

    countDiffChars(str);

    return 0;
}