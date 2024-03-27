/*
Today: 15 - March 2024
Author: Sailendra Chettri
Purpose: pointer conversion
*/
#include<iostream>
using namespace std;

int main()
{   
    int a = 10;

    int *ptr;
    ptr = &a;
    cout << "\nThe value of ptr: "<< ptr << endl;
    cout << "The value of ptr: "<< *ptr << endl;

    cout << "\n---Void to integer--- " << endl;

    void *gp;
    int *ip;    
    gp = ip;

    gp = &a;
    ip = &a;
    cout << "Value of gp: " << gp << endl;
    cout << "Value of ip: " << ip << endl; // already integer so no need to typecast
    cout << "Value of *gp: " << *((int*)gp) << endl; // typecasting the derefremcing
    cout << "Value of *ip: " << *ip << endl; // already integer so no need to typecast

    cout << "\n---Integer to void--- " << endl;

    int *gp2;
    void *ip2;    
    gp2 = (int*)ip2;

    gp2 = &a;
    ip2 = &a;
    cout << "Value of gp2: " << gp2 << endl;
    cout << "Value of ip2: " << ip2 << endl;
    cout << "Value of *gp2: " << *((int *)gp2) << endl; // first typecast then derefremce
    cout << "Value of *ip2: " << *((int *)ip2) << endl;



    return 0;
}