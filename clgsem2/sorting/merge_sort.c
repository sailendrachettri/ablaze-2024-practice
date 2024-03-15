#include <stdio.h>

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void combine(int arr[], int l, int m, int u) {
    int i, j, k, c[50];
    i = l;
    j = m + 1;
    k = l;

    while (i <= m && j <= u) {
        if (arr[i] <= arr[j])
            c[k] = arr[i++];
        else
            c[k] = arr[j++];

        k++;
    }

    while (j <= u)
        c[k++] = arr[j++];
    while (i <= m)
        c[k++] = arr[i++];

    for (i = 0; i <= u; i++) {
        arr[i] = c[i];
    }
}

void mergeSort(int arr[], int l, int u) {
    if (l < u) {
        int m = (l + u) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, u);

        combine(arr, l, m, u); // merge
    }
}

int main() {
    int arr[10] = {9, 0, 2, 4, 5, 12, 1};
    int size = 7;

    printArr(arr, size);
    mergeSort(arr, 0, size - 1);
    printArr(arr, size);

    return 0;
}
