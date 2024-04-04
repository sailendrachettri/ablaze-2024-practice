/*
Today: 03 - April 2024
Author: Sailendra Chettri
Purpose: disductor in oop
*/
#include<iostream>
using namespace std;

int count = 0;

class test{
    public:
        test(){
            count++;
            cout << "inside constructor " << count << endl;
        }

        ~test(){
            cout<< "inside destractor " << count << endl;
            count--;
        }
};

int main()
{
    cout << endl << endl;


    cout << "Inside main " << count << endl;

    cout << "Creating object " << endl;

    test t1;

    {
        cout << "Inside block "<< endl;
        cout << "creating two more objects "<<endl;
        test t2, t3;

        cout << "Exiting block " << endl;
    }

    cout << "out of main" << endl;
    




    cout << endl << endl;
    return 0;
}