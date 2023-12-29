#include <stdio.h>

void main()
{
    int n;
    int fact = 1;

    scanf("%d", &n);
comeBack:
    fact = fact * n;
    n--;

    if (n == 0)
        goto terminate;

    goto comeBack;

terminate:
    printf("%d\n", fact);
}