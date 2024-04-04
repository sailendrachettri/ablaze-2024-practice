/*
Today: 01 - April 2024
Author: Sailendra Chettri
Purpose: 
*/
#include<iostream>
#include <cstring>
using namespace std;

class String{
    char *name;
    int length;

    public:
        String();
        String(char *s);

        void display();
        void join(String &a, String &b);
};

// constructor defination
String::String(){
    length = 0;
    name = new char(length + 1);
}

String::String(char *s){
    length = strlen(s);
    name = new char(length + 1);
    strcpy(name, s);
}



// functions
void String::display(){
    cout  << name << endl;
}

void String::join(String &a, String &b){
    length = a.length + b.length;

    // remove previous created space
    delete name;

    // create dynamic memory for string i.e name
    name = new char(length + 1);

    // copy
    strcpy(name, a.name);

    // concatination
    strcat(name, b.name);
}

int main()
{
    cout << endl << endl;

    char *first = "Indian ";

    String name1(first);
    String name2("Great "); // with space
    String name3("People");
    String s1, s2;

    s1.join(name1, name2);
    s2.join(s1, name3);

    cout << "name1: ";
    name1.display();

    cout << "name2: ";
    name2.display();

    cout << "name3: ";
    name3.display();

    cout << "s1: ";
    s1.display();

    cout << "s2: ";
    s2.display();


    cout << endl << endl;
    return 0;
}