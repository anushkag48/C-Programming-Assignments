/* Author: XYZ
Date: 25-09-26
Description:
Print each character of a string on a new line. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("Enter a string: \n");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}

