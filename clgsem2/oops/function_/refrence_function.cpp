/*
Today: 20 - March 2024
Author: Sailendra Chettri
Purpose: return refrenceing
*/
#include<iostream>
using namespace std;

int &max(int &x, int &y){
    // returning the address itself

   if (x > y) return x;
   
   return y;
}

int main()
{
    cout << endl << endl;



    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    cout << "address of a " << &a << endl;
    cout << "address of b " << &b << endl;
    int val = max(a, b) = -1;

    cout << endl <<  val << " is greater." <<endl;
    cout << "Address of val " << &val <<endl;

    cout << "\naddress of a " << &a << endl;
    cout << "address of b " << &b << endl;


    cout <<endl << endl;
    return 0;
}