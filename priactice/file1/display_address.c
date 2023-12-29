#include <stdio.h>

void main()
{
    int n, i;
    int arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Address of all elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%u ", &arr[i]);
    }

    return;
}