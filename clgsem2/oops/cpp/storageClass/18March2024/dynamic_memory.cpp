/*
Today: 18 - March 2024
Author: Sailendra Chettri
Purpose: dynamic memory allocation
*/
#include<iostream>
using namespace std;

int main()
{
    cout << endl << endl;

    // int *p;
    // p = new int;

    // OR
    // int *p = new int(4);

    // cout << "value of p           : " << *p << endl;
    // cout << "value of p is address: " << p << endl;
    // cout << "address of &p        : " << &p << endl;
    
    // delete p;

    // cannot do it because memoery if free
    // cout << "value of p: " << *p << endl;
    // cout << "address of p: " << p << endl;


    // ARRAY
    int size, sum = 0;
    cout << "Enter the size: ";
    cin >> size;

    // int arr[10]; // static memory allocation
    int *x = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> x[i];
        sum += x[i];
    }
    
    cout << "\nSum  : " << sum << endl;
    cout << "Average: " <<  (sum / size) << endl;

    







    

    cout << endl << endl;

    return 0;
}