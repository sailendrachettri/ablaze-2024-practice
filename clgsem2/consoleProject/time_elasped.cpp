/*
Today: 17 - March 2024
Author: Sailendra Chettri
Purpose: Simplified Calculator with Time Tracking
*/
#include<iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    double num1, num2, sum;
    auto start = steady_clock::now();

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    auto end = steady_clock::now();

    sum = num1 + num2;
    auto elapsed_time = duration_cast<seconds>(end - start).count();

    cout << "The sum is " << sum << endl;
    cout << "The elapsed time is " << elapsed_time << " seconds." << endl;

    return 0;
}
