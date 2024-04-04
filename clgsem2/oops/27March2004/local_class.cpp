/*
Today: 27 - March 2024
Author: Sailendra Chettri
Purpose: local class - defininf a class inside a function
        Rules
            - it can access any global variable
            - it can access any local static variable
            - it cannot auto variable
*/
#include<iostream>
using namespace std;

int gv = 10;

void localFunc(){
    static int si = 5;
    int p = 15;

    class myClass{
        public:
            void printVal(){
                cout << "int gv: " << gv << endl;
                cout << "static int si: " << si << endl;
                // cout << "int p: " << p << endl;
            }

    };

    myClass obj;
    obj.printVal();
}

int main()
{
    cout <<"\n\n";

    
    localFunc();   



    cout <<"\n\n";
    return 0;
}