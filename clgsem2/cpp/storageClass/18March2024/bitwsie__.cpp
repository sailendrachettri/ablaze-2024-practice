
#include<iostream>
using namespace std;

int main()
{
    unsigned int x, y;
    x = 5, y = 7;

    // cout << endl << sizeof((int)'x') << endl;
    // cout << sizeof('x') << endl << endl;

    cout << "\nSizeof x: " << sizeof(x) << endl;
    cout << "Sizeof y: " << sizeof(y) << endl;

    cout << "x&y: " << (x & y) << endl;

    return 0;
}