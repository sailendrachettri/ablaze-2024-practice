#include <stdio.h>
#include <string.h>

struct emp{
    int id;
    char name[25];
    char dept[30];

    struct dateofbirth{
        int date;
        int month;
        int year;
    } dob;

} ep1;

int main(){
    
    int id = 101;
    strcpy(ep1.name, "Sailendra Chettri");
    strcpy(ep1.dept, "Computer Application");

    ep1.dob.date = 7;
    ep1.dob.month = 6;
    ep1.dob.year = 2024;

    printf("Name is %s and dept is %s and id is %d and dob is %d-%d-%d.\n", ep1.name, ep1.dept, ep1.id, ep1.dob.date, ep1.dob.month, ep1.dob.year);



    return 0;
}