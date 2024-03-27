/*
Today: 20 - March 2024
Author: Sailendra Chettri
Purpose: call by value ad call by refrence
*/
#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    cout << endl << endl;



    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    cout << "before a = " << a << endl;
    cout << "before b = " << b << endl;
    cout << "address of a = " << &a << endl;
    cout << "address of b = " << &b << endl;

    swap(a, b);

    cout << "\nafter a = " << a << endl;
    cout << "after b = " << b << endl;
    cout << "address of a = " << &a << endl;
    cout << "address of b = " << &b << endl;



    cout <<endl << endl;
    return 0;
}