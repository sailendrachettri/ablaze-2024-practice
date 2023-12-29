#include <stdio.h>

void display(int, int[]);

void main()
{
    int i, pos, size = 6, arr[100] = {1, 2, 5, 9, 6, 7};

    printf("Enter a index where you want to delete value: ");
    scanf("%d", &pos);

    display(size, arr);

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