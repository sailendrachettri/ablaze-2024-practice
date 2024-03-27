/*
Today: 20 - March 2024
Author: Sailendra Chettri
Purpose: inline function
Task: check time taken for using inline and without inline
*/
#include <iostream>
#include <chrono>
using namespace std;

inline int mal2(int a, int b)
{
    return a * b;
}

inline int dv2(int a, int b)
{
    return a / b;
}

int mal(int a, int b)
{
    return a * b;
}

int dv(int a, int b)
{
    return a / b;
}

int main()
{
    cout << endl << endl << endl;
    
    int a, b, ans1, ans2;
    cout << "Ente a and b: ";
    cin >> a >> b;

    auto start = chrono::steady_clock::now();

    dv(a, b);
    mal(a, b);

    auto end = chrono::steady_clock::now();

    int totalTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    cout << "The total time taken by (normal function) : " << totalTime << " nanoseconds." << endl;
    // cout << "multiplication of a*b: " << ans2 << endl;

    start = chrono::steady_clock::now();

    dv2(a, b);
    mal2(a, b);

    end = chrono::steady_clock::now();

    totalTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    cout << "The total time taken (inline function) : " << totalTime << " nanoseconds." << endl;

    cout << endl << endl << endl;
    return 0;
}