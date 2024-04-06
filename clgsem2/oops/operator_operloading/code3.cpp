/*
Today: 05 - April 2024
Author: Sailendra Chettri
Purpose: member operator overloading on (binary function objects)
*/
#include<iostream>
using namespace std;

class Complex
{
    float x, y;

    public:
        Complex(){}
        Complex(float real, float imag);
        Complex operator+(Complex);
        void display(void);
};

Complex::Complex(float real, float imag){
    x = real;
    y = imag;
}

Complex Complex::operator+(Complex c){
    Complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;

    return temp;
}

void Complex::display(void){
   cout << x << " + " << y << "i" << endl;
}

int main()
{
    cout << endl << endl;



    Complex c1, c2, c3;
    c1 = Complex(2.5, 3.5);
    c2 = Complex(1.6, 2.7);
    c3 = c1 + c2;

    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "---------------"<< endl;
    cout << "c3 = ";
    c3.display();




    cout << endl << endl;
    return 0;
}