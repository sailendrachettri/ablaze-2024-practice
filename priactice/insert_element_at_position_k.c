#include <stdio.h>

void display(int, int[]);

void main()
{
    int i, val, pos, size = 5, arr[100] = {4, 5, 3, 6, 9};

    printf("Enter value and position: ");
    scanf("%d %d", &val, &pos);

    display(size, arr);

    // making a space for value
    for (i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    size++;

    display(size, arr);

    return;
}

void display(int n, int arr[100])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}