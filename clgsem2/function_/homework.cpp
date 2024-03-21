/*
Today: 20 - March 2024
Author: Sailendra Chettri
Purpose: calualate variance, standared deviation, 
*/
#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
Mean (average):
μ = Σx / n

Variance:
σ^2 = Σ(x - μ)^2 / n

Standard deviation:
σ ≈ √σ^2

In these formulas:

Σ denotes the sum of the values.
x represents each individual value in the dataset.
μ is the mean (average) of the dataset.
n is the number of values in the dataset.
σ^2 is the variance.
σ is the standard deviation.
*/

int main()
{
    cout << endl << endl;

    double variance = 0, standardDeviation, mean, avg;
    int size, sum = 0;

    cout << "Enter size of dataset: ";
    cin >> size;

    float sqDiffArr[size];
    int dataset[size];

    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> dataset[i];

    } cout << endl;

    //calculate sum and get average
    for(int i = 0; i < size; i++){
        sum += dataset[i];
    }
    avg = sum / (double)size;

    // calcualte squire difference and store it to array (x - μ)^2
    for(int i = 0; i < size; i++){
        sqDiffArr[i] = pow((dataset[i] - avg), 2);
    }

    // now find the varience
    for(int i = 0; i < size; i++){
        variance += sqDiffArr[i];
    }

    variance = variance / size;
    standardDeviation = sqrt(variance);

    // print in tabular form in console
    cout << "--x-- " << "  --μ-- " << " --(x - μ)^2-- " << endl;
    for(int i = 0; i < size; i++){
        cout << "| " << dataset[i] << " |" << "   | " << setprecision(2) << avg << " |   " << "  | " << setprecision(2) << pow((dataset[i] - avg), 2) << " | "<< endl << endl;
    }
    
    cout << "The varience is           : " << variance << endl;
    cout << "The standard deviation is : " << standardDeviation << endl;

    cout << endl << endl;
    return 0;
}