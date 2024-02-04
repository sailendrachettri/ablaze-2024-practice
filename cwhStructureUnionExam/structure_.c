#include <stdio.h>
#include <string.h>

struct student{
    int id;
    int marks;
    char name[24];
}sailendra, chettri;

int main(){
    
    sailendra.id = 101;
    strcpy(sailendra.name, "sailendra");

    printf("\nId: %d\n", sailendra.id);
    printf("\nId: %d\n", sailendra.id);
    printf("\nName: %s\n\n", sailendra.name);
    
    return 0;
}
