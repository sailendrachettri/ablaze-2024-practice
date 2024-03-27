/*
Today: 21 - March 2024
Author: Sailendra Chettri
Purpose: function overloading
*/
#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}
int add(int a, int b, int c){
    return a + b + c;
}
double add(double a, double b){
    return a + b;
}
double add(int a, double b){
    return a + b;
}
double add(double a, int b){
    return a + b;
}

int main()
{
    cout << endl
         << endl;

    double ans = add(5, 10);
    cout << "Ans: " << ans << endl;
    
    ans = add(15, 10.0);
    cout << "Ans: " << ans << endl;
    
    ans = add(12.5, 7.5);
    cout << "Ans: " << ans << endl;
    
    ans = add(5, 10, 15);
    cout << "Ans: " << ans << endl;
    
    ans = add(0.75, 5);
    cout << "Ans: " << ans << endl;

    cout << endl
         << endl;
    return 0;
}