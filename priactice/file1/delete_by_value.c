#include <stdio.h>

void display(int, int[]);

void main()
{
    int i, val, pos, size = 6, arr[100] = {1, 2, 5, 9, 6, 7};
    display(size, arr);

    printf("Enter a value which you want to delete: ");
    scanf("%d", &val);

    for (i = 0; i < size; i++)
    {
        if (val == arr[i])
            pos = i;
    }

    for (i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

    display(size, arr);
}

void display(int size, int arr[100])
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}