#include <stdlib.h>
#include <stdio.h>

int main(){

    int arr[10], n, ele, *p; 

    printf("\nEnter size: ");
    scanf("%d", &n);

    p = (int *) malloc(2 * n);
    p = arr;


    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", p+i);

    printf("Which element u looking for? ");
    scanf("%d", &ele);
    

    for(int i = 0; i < n; i++){
        if(ele == *(p+i)){
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element NOT found\n");


    return 0;
}