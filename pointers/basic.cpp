#include <iostream>
using namespace std;

int main(){

    int v = 3;
    int *pv;
    pv = &v;

    cout << "The value of v is " << v << endl;
    cout << "The value of pv is " << pv << endl;
    cout << "The value of *pv is " << *pv << endl;

    *pv = 0;
    cout << "The value of *pv is " << *pv << endl;



    return 0;
}