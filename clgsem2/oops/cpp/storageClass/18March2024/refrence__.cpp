/*
Today: 18 - March 2024
Author: Sailendra Chettri
Purpose: 
*/
#include<iostream>
using namespace std;

int main()
{
    float p[5] = {10, 20, 30, 40, 50};
    float total = 100;
    float &sum = p[4];

    cout << "\nTotal: " << total << endl;
    cout << "Sum: " << sum << endl<<endl;

    sum = 0;

    cout << "Total: " << total << endl;
    cout << "Sum: " << sum << endl<<endl;

    cout << "Total address: " << &total << endl;
    cout << "Sum address  : " << &sum << endl<<endl;

    return 0;
}