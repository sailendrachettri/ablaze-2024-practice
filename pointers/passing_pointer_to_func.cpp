/*
Today: 10 - FeburarY 2024
Author: Sailendra Chettri
Purpose: pASSING POINTERS TO A FUNCTION
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void funcValue(int a, int b){
    a = 20;
    b = 40;
}

void funcRefrence(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;

    funcValue(a, b);
    
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;

    funcRefrence(&a, &b);

    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;



    return 0;
}