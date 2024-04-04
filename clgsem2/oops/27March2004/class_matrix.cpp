/*
Today: 27 - March 2024
Author: Sailendra Chettri
Purpose: transfore of matrix
*/
#include <iostream>
using namespace std;

class matrix
{
    int m[3][3];

public:
    void read(void)
    {
        cout << "Enter 3x3 matrix:" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> m[i][j];
            }
        }
    }
    void display(void)
    {
        cout << "Transposed matrix: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend matrix transpose(matrix mt);
};

matrix transpose(matrix m1)
{
    matrix m2;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            m2.m[i][j] = m1.m[j][i];
        }
    }

    return m2;
}

int main()
{
    cout << "\n\n";

    matrix mat1, mat2;

    mat1.read();
    mat1.display();

    mat2 = transpose(mat1);

    mat2.display();

    

    cout << "\n\n";

    return 0;
}