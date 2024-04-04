/*
Today: 01 - April 2024
Author: Sailendra Chettri
Purpose: implement constructor overloading
*/
#include<iostream>
using namespace std;

class complex{
    float x, y;
    public:
        complex(){};
        complex(float a);
        complex(float real, float imag);

        friend complex sum(complex, complex);
        friend void show(complex);
};

complex::complex(float a){
    x = a;
    y = a;
}

complex::complex(float r, float i){
    x = r;
    y = i;
}

complex sum(complex c1, complex c2){
    complex res;
    res.x = c1.x + c2.x;
    res.y = c1.y + c2.y;

    return res;
}

void show(complex obj){
    cout << obj.x << " + " << obj.y << "i"<< endl;
}

int main()
{
    cout << "\n\n";
    complex A(2.7, 3.5), B(1.6), C;

    C = sum(A, B);

    cout <<"A = ";
    show(A);

    cout << "B = ";
    show(B);

    cout << "-------------- " <<endl;

    cout << "C = ";
    show(C);

    cout << "\n\n";

    return 0;
}