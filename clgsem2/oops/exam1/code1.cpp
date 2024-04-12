/*
Today: 10 - April 2024
Author: Sailendra Chettri
Purpose:
*/
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Counter
{
    int count;

public:
    Counter();
    void display();
    void member(Counter &);
    friend void operator+(Counter &);
};

void Counter::display()
{
    cout << "Value of count: " << count << endl;
}

Counter::Counter()
{
    count = 0;
}


// friend function
void operator+(Counter &a)
{
    a.count = a.count + 1;
}

// member function
void Counter::member(Counter &a){
    a.count = a.count + 1;
}

int main()
{
    cout << "\n\n";

    Counter obj1;

    auto start = chrono::steady_clock::now();
    operator+(obj1);
    obj1.display();
    auto end = chrono::steady_clock::now();
    auto time = chrono::duration_cast<nanoseconds>(end - start).count();
    cout << "Total time required by friend function " << time << " nano seconds." << endl<< endl; 

    start = chrono::steady_clock::now();
    obj1.member(obj1);
    obj1.display();
    end = chrono::steady_clock::now();
    time = chrono::duration_cast<nanoseconds>(end - start).count();
    cout << "Total time required by member function " << time << " nano seconds." << endl<< endl;

    cout << endl
         << endl;
    return 0;
}