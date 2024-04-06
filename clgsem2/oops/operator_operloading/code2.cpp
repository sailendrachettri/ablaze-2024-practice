/*
Today: 05 - April 2024
Author: Sailendra Chettri
Purpose: operator operloadin' frjend operation function (uniray code)
*/
#include <iostream>
using namespace std;

class space
{
    int x, y, z;

public:
    void getData(int a, int b, int c);
    void display(void);
    friend void operator-(space &s);
};

void space::getData(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void space::display(void)
{
    cout << "The value of x " << x << endl;
    cout << "The value of y " << y << endl;
    cout << "The value of x " << z << endl;
}

void operator-(space &s)
{
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main()
{
    cout << endl
         << endl;

    space S;
    S.getData(10, -20, 30);

    cout << "Display S: " << endl;
    S.display();
    
    -S;

    cout << "Display -S: " << endl;
    S.display();

    cout << endl
         << endl;
    return 0;
}