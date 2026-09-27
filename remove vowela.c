/* Author: XYZ
Date: 27-09-26
Description:
Remove all vowels from a string. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, j = 0;

    printf("Enter a string: \n");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u')
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';

    printf("String after removing vowels = %s\n", str);

    return 0;
}
