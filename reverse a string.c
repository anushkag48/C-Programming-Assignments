/* Author: XYZ
Date: 26-09-26
Description:
Reverse a string. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: \n");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
