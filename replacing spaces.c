/* Author: XYZ
Date: 26-09-26
Description:
Replace spaces with hyphens in a string. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }

        i++;
    }

    printf("String after replacing spaces with hyphens:\n");
    printf("%s", str);

    return 0;
}
