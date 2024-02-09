/*
Today: 25 - December 2023
Author: Sailendra Chettri
Purpose: Sum of digits using recursion
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int getSum(int n){
    int sum = 0;

    if(n == 0)
        return 0;
        
    return sum + n%10 + getSum(n /= 10);
}


int main()
{
    int num, sum;
    cout << "Enter num: ";
    cin >> num;
    sum = getSum(num);

    cout << "The sum of digits is " << sum << endl;
    return 0;
}