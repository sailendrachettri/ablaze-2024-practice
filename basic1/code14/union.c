#include <stdio.h>

union abc{
    int a;
    char b;
};

int main(){

    union abc var;
    var.a = 10;
    var.b = '\\';

    printf("var.a : %d.\n", (char) var.a);
    printf("var.b : %d.\n\n", (char) var.b);
    
    return 0;
}