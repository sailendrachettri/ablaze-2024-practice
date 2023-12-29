#include <stdio.h>

void main()
{
    int n, i, arr[100];
    int smallest, largest;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // find smallest and greatest
    smallest = arr[0], largest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];

        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Smallest is %d.\n", smallest);
    printf("Largest is %d.\n", largest);

    return;
}