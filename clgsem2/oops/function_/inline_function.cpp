/*
Today: 20 - March 2024
Author: Sailendra Chettri
Purpose: inline function
Task: check time taken for using inline and without inline
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

inline int  mal(int a, int b){
    return a * b;
}

inline int  dv(int a, int b){
    return a / b;
}

int main()
{
    cout << endl << endl;



    /* inline function
            dos
                - faster
                - if very small code generall < 2 lines
            don'ts
                - it uses high memeory space
                - recursion
                - if it has static keyword
                - loop etc
    */
    

   int a, b, ans1, ans2;
   cout << "Ente a and b: ";
   cin >> a >> b;

   ans1 = dv(a,  b);
   ans2 = mal(a, b);

   cout << "\ndivision of a/b: " << ans1 << endl;
   cout << "multiplication of a*b: " << ans2 << endl;



    cout << endl << endl;
    return 0;
}