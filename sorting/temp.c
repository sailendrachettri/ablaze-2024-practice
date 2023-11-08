#include <stdio.h>

void main()
{
    int temp[100] = {9, 1, 2, 4, 5};
    int n = 5;
    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (temp[j] > temp[j + 1])
            {

                t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }
    return;
}
