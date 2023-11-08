/* Date: 04 - 11 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    // QUESTION 1
    // for (int i = 1; i < 5; i++)
    // {
    //     fork();
    // }
    // cout << " 1 " << endl;

    // QUESTION 2
    if (fork() && fork())
        fork();
    cout << "Hello" << endl;

    return 0;
}