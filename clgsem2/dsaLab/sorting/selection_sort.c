#include <stdio.h>

void selectionSort(int *arr, int n) {
    int *ptr, *min;

    for (ptr = arr; ptr < arr + n - 1; ptr++) {
        min = ptr;
        for (int *temp = ptr + 1; temp < arr + n; temp++) {
            if (*temp < *min)
                min = temp;
        }
        if (min != ptr) {
            int temp = *ptr;
            *ptr = *min;
            *min = temp;
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
