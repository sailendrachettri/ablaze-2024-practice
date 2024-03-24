/*
Today: 21 - March 2024
Author: Sailendra Chettri
Purpose: friend function
*/
#include<iostream>
using namespace std;

class sample{
    int a, b;

    public:
        friend float mean(sample s);

        void setvalue(void){
            a = 25;
            b = 5;
        }
};

float mean(sample s){
    return (s.a  + s.b) / 2.0;
}

int main()
{
    sample obj;
    obj.setvalue();

    float res = mean(obj);
    cout << "mean: " << res << endl;
    
    return 0;
}