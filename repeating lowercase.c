/* Author: XYZ
Date: 27-09-26
Description:
Find the first repeating lowercase alphabet in a string. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i, j, found = 0;

    printf("Enter a string: \n");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            for (j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                {
                    printf("First repeating character = %c\n", str[i]);
                    found = 1;
                    break;
                }
            }

            if (found == 1)
            {
                break;
            }
        }
    }

    if (found == 0)
    {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
