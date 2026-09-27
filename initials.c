/* Author: XYZ
Date: 27-09-26
Description:
Print the initials of a name. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("Enter a name: \n");
    fgets(str, sizeof(str), stdin);

    printf("Initials: \n");

    if (str[0] != ' ')
    {
        printf("%c", str[0]);
    }

    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n')
        {
            printf(".%c", str[i + 1]);
        }

        i++;
    }

    printf(".\n");

    return 0;
}
