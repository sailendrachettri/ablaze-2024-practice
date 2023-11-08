#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main()
{

    int arr[100] = {9, 4, 1, 0, 11, 3, 2, 4, 11, 10, 12, 1, 4};
    int size = 13, min_ind, pos;

    for (int i = 0; i < size; i++)
    {
        min_ind = i;

        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n\n");

        for (int j = i + 1; j < size; j++)
        {
            if (arr[min_ind] > arr[j])
                min_ind = j;
        }

        if (min_ind != i)
        {
            pos = arr[i];
            arr[i] = arr[min_ind];
            arr[min_ind] = pos;
        }
    }

    display(arr, size);

    return;
}