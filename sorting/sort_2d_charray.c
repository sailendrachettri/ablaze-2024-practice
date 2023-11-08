#include <stdio.h>
#include <string.h>

void display(char[][100], int);
void sortAsc(char[][100], int);

void main()
{

    char str[100][100], temp[100];
    int n;

    printf("Enter length: ");
    scanf("%d", &n);

    printf("Enter names: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    sortAsc(str, n);
    display(str, n);

    return;
}

void display(char str[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s ", str[i]);
    }
    printf("\n\n");
}

void sortAsc(char str[][100], int n)
{
    char temp[100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    display(str, n);
}