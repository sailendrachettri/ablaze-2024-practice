/*
Today: 18 - March 2024
Author: Sailendra Chettri
Purpose: scope resolution
*/
#include<iostream>
using namespace std;

int m = 10;

int main()
{
    cout << endl << endl;

    int m = 20;
    {
        int k = m;
        int m = 30;

        cout << "K: " << k << endl;
        cout << "local M: " << m << endl;
        cout << "local M address: " << &m << endl;
    }
    
    cout << "main M: " << m << endl;
    cout << "main M address: " << &m << endl;
    
    cout << "global M: " << ::m << endl;
    cout << "global M address: " << &::m << endl;

    cout << endl << endl;
    return 0;
}