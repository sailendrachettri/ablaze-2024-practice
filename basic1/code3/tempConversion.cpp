/* Date: 03 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float cels, fahr;
    cout << "Temperature in Cels: ";
    cin >> cels;
    cout << cels << " cels is " << (cels * 9.0 / 5.0) + 32.0 << " in fahr." << endl;
    cout << "Temperature in Fahr: ";
    cin >> fahr;
    cout << fahr << " fahr is " << (fahr - 32.0) * 5.0 / 9.0 << " in cels." << endl;

    return 0;
}