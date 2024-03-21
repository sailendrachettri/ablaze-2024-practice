/*
Today: 21 - March 2024
Author: Sailendra Chettri
Purpose: calculate volumes
*/
#include<iostream>
using namespace std;

int volume(int);
float volume(float, int );
int volume(int, int, int);

#define PI 3.14

int main()
{
    cout << "\n\n";

    int side, radius, height, length, width;

    cout << "Enter side, height, length, radius, width: ";
    cin >> side >> height >> length >> radius >> width;

    cout << "\nVolumen of cube: "<<volume(side) << endl;
    cout << "Volume of cylinder: " << volume(radius, height) << endl;
    cout << "Volume of rectangular box: " << volume(height, side, length) << endl;

    cout <<"\n\n";
    return 0;
}

int volume(int side){
    return side * side * side;
}
float volume(float radius, int height){
    return PI * radius * radius * height;
}   
int volume(int height, int width, int length){
    return length * width * height;
}