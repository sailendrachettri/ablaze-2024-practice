#include<iostream>
#include "variables.h"
using namespace std;

void print(){
    cout << "The sharedVar: " << sharedVar << endl;
}

int main()
{
    print();
    
    return 0;
}