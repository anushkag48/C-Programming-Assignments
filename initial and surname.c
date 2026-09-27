/* Author: XYZ
Date: 27-09-26
Description:
Print the initials of a name with the surname displayed in full. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, lastSpace = 0;

    printf("Enter a name: \n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            lastSpace = i;
        }

        i++;
    }

    printf("Name: ");

    i = 0;

    while (i < lastSpace)
    {
        if (i == 0)
        {
            printf("%c. ", str[i]);
        }
        else if (str[i] == ' ' && str[i + 1] != ' ')
        {
            printf("%c. ", str[i + 1]);
        }

        i++;
    }

    for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
    {
        printf("%c", str[i]);
    }

    printf(".\n");

    return 0;
}
