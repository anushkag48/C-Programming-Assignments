/* Author: XYZ
Date: 26-09-26
Description:
Check whether a string is a palindrome or not. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: \n");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
