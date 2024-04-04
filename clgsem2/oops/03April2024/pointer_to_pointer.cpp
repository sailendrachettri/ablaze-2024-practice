/*
Today: 03 - April 2024
Author: Sailendra Chettri
Purpose: pointer to pointer
*/
#include <iostream>
using namespace std;

class matrix
{
    int **p;
    int d1, d2;

public:
    matrix(int x, int y);
    void getElement(int i, int j, int value);
    int &putElement(int i, int j);
};

void matrix::getElement(int i, int j, int value)
{
    p[i][j] = value;
}

int &matrix::putElement(int i, int j)
{
    return p[i][j];
}

matrix::matrix(int x, int y)
{
    d1 = x;
    d2 = y;

    p = new int *[d1];

    for (int i = 0; i < d1; i++)
    {
        p[i] = new int[d2];
    }
}

int main()
{
    cout << endl
         << endl;

    int m, n, value;

    cout << "Ente row size and col size: ";
    cin >> m >> n;

    matrix A(m, n);

    // insert data
    cout << "Enter " << m << "x" << n << " elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> value;
            A.getElement(i, j, value);
        }
    }

    // display data
    cout << "Display the elements: "<< endl;
    cout << A.putElement(2, 1) << endl;


    cout << endl
         << endl;
    return 0;
}