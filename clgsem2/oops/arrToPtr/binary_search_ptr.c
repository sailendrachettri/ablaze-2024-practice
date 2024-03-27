#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int *p, arr[20], low, mid, high, ele, n;

    printf("Enter size: ");
    scanf("%d", &n);
    
    p = (int *) malloc(2 * n);
    p = arr;

    printf("Enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", (p+i));
    }

    printf("Which element u looking for? ");
    scanf("%d", &ele);


    low = 0, high = n-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (*(p+mid)== ele){
            printf("Element found at index %d.\n", mid);
            return 0;
        }

        if (*(p+mid) < ele)
            low = mid + 1;

        else
            high = mid - 1;
    }

    printf("Element NOT found.\n");

    return 0;
}