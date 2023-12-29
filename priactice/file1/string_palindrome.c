#include <stdio.h>
#include <string.h>
int main()
{

    char str1[100] = {'h', 'e', 'l', 'l', 's', '\0'};
    char temp[100];
    int i = 0, flag = 1, len = 0;

    while (str1[i] != '\0')
    {
        len++;
        i++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        temp[i] = str1[i];
    }

    for (i = 0; i < len; i++)
    {
        if (str1[i] != temp[i])
            flag = 0;
    }

    printf("%s %s\n", str1, temp);

    printf("%d %d\n", flag, len);

    flag ? printf("Yes") : printf("No");
    return 0;
}