/*
Today: 15 - FeburarY 2024
Author: Sailendra Chettri
Purpose: Mirror rhambous
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 10;

    for(int i = 0; i < row; i++){
        for(int sp = 0; sp <= i; sp++){
            cout << " ";
        }

        for(int j = 0; j < row; j++){
            if(j == 0 || i == 0 || j == row-1 || i == row-1)
                cout << " * ";
            else cout << "   ";
        }

        

        cout << endl;
    }

    return 0;
}
//  *  *  *  *  *  *  *  *  *  * 
//    *                          * 
//     *                          * 
//      *                          * 
//       *                          * 
//        *                          * 
//         *                          * 
//          *                          * 
//           *                          * 
//            *  *  *  *  *  *  *  *  *  * 