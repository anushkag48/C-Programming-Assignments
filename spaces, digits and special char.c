/* Author: XYZ
Date: 26-09-26
Description:
Count spaces, digits, and special characters in a string. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if ((str[i] < 'a' || str[i] > 'z') &&
                 (str[i] < 'A' || str[i] > 'Z') &&
                 str[i] != '\n')
        {
            special++;
        }

        i++;
    }

    printf("Number of spaces = %d\n", spaces);
    printf("Number of digits = %d\n", digits);
    printf("Number of special characters = %d\n", special);

    return 0;
}
