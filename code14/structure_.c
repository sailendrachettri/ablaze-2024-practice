#include <stdio.h>
#include <string.h>

struct student{
    int id;
    int rollnumber;
    char name[25];
};

int main(){

    struct student std1, std2, std3;
    std1.id = 101;
    std2.id = 102;
    std3.id = 103;

    std1.rollnumber = 9023;
    std2.rollnumber = 4013;
    std3.rollnumber = 5043;

    strcpy(std1.name, "Sailendra");
    strcpy(std2.name, "Rohan");
    strcpy(std3.name, "Rathor");

    printf("\n\nstd1's name is %s and his Id is %d with roll number %d.\n", std1.name, std1.id, std1.rollnumber);
    printf("std2's name is %s and his Id is %d with roll number %d.\n", std2.name, std2.id, std2.rollnumber);
    printf("std3's name is %s and his Id is %d with roll number %d.\n\n", std3.name, std3.id, std3.rollnumber);

    return 0;
}