/*
Today: 15 - March 2024
Author: Sailendra Chettri
Purpose: function call
*/
#include<iostream>
using namespace std;

void f1(int a){
    cout << "\nDisplay a: "<< a << endl;
}

void f2(void){
    cout << "I/P and O/P both void" << endl;
}

int f3(void){
    return 10;
}

int main()
{
    f1(5);
    f2();
    int x = f3();
    cout << "printing return value " << x << endl;

    return 0;
}