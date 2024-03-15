#include <stdio.h>
#include <string.h>

void swap(char*, char *);

int main(){
    char st[100];
    gets(st);

    for(int i = 0; i < strlen(st); i++){
        for(int j = 0; j < strlen(st); j++){
            if(st[i] > st[j])
                swap(&st[i], &st[j]);
        }
    }

    printf("%s", st);

    return 0;
}

void swap(char* a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}