/*
Today: 15 - April 2024
Author: Sailendra Chettri
Purpose: multilevel inheritence
*/
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void get_num(int);
    void put_num(void);
};
void student::get_num(int roll)
{
    roll_no = roll;
}
void student::put_num(void)
{
    cout << "The roll number is " << roll_no << endl;
}

class test : public student
{
protected:
    float subject1;
    float subject2;

public:
    void get_marks(float, float);
    void put_marks(void);
};
void test::get_marks(float m1, float m2)
{
    subject1 = m1;
    subject2 = m2;
}
void test::put_marks(void)
{
    cout << "Marks for subject1 is " << subject1 << endl;
    cout << "Marks for subject2 is " << subject2 << endl;
}

class result : public test
{
private:
    float total;

public:
    void display(void);
};
void result::display(void)
{
    total = subject1 + subject2;
    put_num();
    put_marks();
    cout << "Total marks is " << total << endl;
}

int main()
{
    cout << endl
         << endl;

    int roll, size = 5;
    result student[size];
    float marks1, marks2;

    for (int i = 1; i <= size; i++)
    {

        cout << "Enter the roll number for student" << i << ": ";
        cin >> roll;

        cout << "Enter marks for two subjects" << i << ": ";
        cin >> marks1 >> marks2;

        cout << endl;

        student[i].get_num(roll);
        student[i].get_marks(marks1, marks2);
    }

    for (int i = 1; i <= size; i++)
    {
        cout << "Information for student" << i << endl;
        student[i].display();
        cout << endl;
    }

    cout << endl
         << endl;
    return 0;
}