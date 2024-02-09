#include <stdio.h>

void reverseArray(int arr[], int n){
    int start, end, temp;
    start = 0, end = n-1;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }
}

void main(){
    int arr[] = {9, 0, 8, 3, 5, 9, 4, 0, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
    reverseArray(arr, size);

    printf("\nReversed array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}