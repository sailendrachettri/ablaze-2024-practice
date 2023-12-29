#include <stdio.h>
#include <string.h>
int main()
{

    char str1[100] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str2[100] = {'w', 'o', 'r', 'l', 'd', '\0'};
    /* int i = 0, str1_len = 0, str2_len = 0;

    while (str1[i] != '\0')
    {
        i++;
        str1_len++;
    }
    i = 0;
    while (str1[i] != '\0')
    {
        i++;
        str2_len++;
    }

    printf("len1 %d\n", str1_len);
    printf("len2 %d\n", str2_len);

    char str3[100];

    i = 0;
    while (str1[i] != '\0')
    {
        str3[i] = str1[i];
        i++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        str3[str1_len++] = str2[i];
        i++;
    }

    printf("%s\n", str3);
    */

    char str3[100];
    strcpy(str3, str1);
    strcat(str3, str2);

    printf("%s\n", str3);

    return 0;
}