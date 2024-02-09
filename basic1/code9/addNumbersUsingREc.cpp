/*
Today: 24 - December 2023
Author: Sailendra Chettri
Purpose: Add Two numbers using recursion
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sumRecursion(int num1, int num2){
    int sum = 0;

    if(num2 == 0)
        return num1;
    
    sum = sumRecursion(num1, num2-1) + 1;

    return sum;
}

int main()
{
    int num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = sumRecursion(num1, num2);

    cout << "The sum is " << sum << endl;
    return 0;
}