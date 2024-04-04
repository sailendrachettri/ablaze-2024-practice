/*
Today: 03 - April 2024
Author: Sailendra Chettri
Purpose: copy constructor
*/
#include<iostream>
using namespace std;

class code {
    int id;

    public:
        code(){}
        code(int a) {
            id = a;
        }

        code(code &x){
            id = x.id;
        }

        void display(){
            cout << "id: " << id << endl;
        }
};

int main()
{
    cout << endl << endl;



    code A(100);
    code B(A);
    code C = A;
    code D = A;

    cout << "A: ";
    A.display();

    cout << "B: ";
    B.display();

    cout << "C: ";
    C.display();

    cout << "D: ";
    D.display();




    cout << endl << endl;
    return 0;
}