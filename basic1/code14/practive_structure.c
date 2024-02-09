// dome of ptr using structure

#include <stdio.h>

struct someData{
    int val;
    int *ptr;
};

int main(){

    struct someData data;
    data.val = 1200;

    data.ptr = &data.val;

    printf("The value of data is %d.\n", *(data.ptr));
    
    return 0;
}