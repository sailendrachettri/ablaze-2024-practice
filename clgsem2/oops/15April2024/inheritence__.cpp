// /*
// Today: 15 - April 2024
// Author: Sailendra Chettri
// Purpose: inheritence
// */
// #include <iostream>
// using namespace std;

// class B
// {
//     int a;

// public:
//     int b;
//     void set_ab(int);
//     int get_a(void);
//     void show_a(void);
// };

// void B::set_ab(int a1)
// {
//     a = a1;
//     b = 10;
// }

// int B::get_a(void)
// {   
//     return a;
// }

// void B::show_a(void)
// {
//     cout << "Value of a is " << a << endl;
// }

// // another class that is inherited from class B
// class D : public B
// {
//     int c;

// public:
//     void mul(void);
//     void display(void);
// };

// void D::mul(void){
//     int a = get_a();
//     c = a * b;
// }

// void D::display(void){
//     cout << "Value of c after multiplied is " << c << endl;
// }



// int main()
// {
//     cout << endl
//          << endl;
//         int val;
//          cout << "Enter value: ";
//          cin >> val;

//          D d;
//          d.set_ab(val);
//          d.show_a();
//          d.mul();
//          d.display();

//     cout << endl
//          << endl;
//     return 0;
// }