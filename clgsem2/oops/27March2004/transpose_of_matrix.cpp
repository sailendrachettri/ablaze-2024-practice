/*
Today: 27 - March 2024
Author: Sailendra Chettri
Purpose: transfore of matrix
*/
#include<iostream>
using namespace std;

int main()
{
    cout << endl << endl;



    int n = 3;
    int matrix[3][3], transpose[3][3];

    cout << "Enter 3x3 matrix:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    // cout << "Transposing..."<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            transpose[i][j] = matrix[j][i];
        }
    }

    cout << "Transposed matrix: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }






    cout << endl << endl;
    return 0;
}