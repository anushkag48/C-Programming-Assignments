/* Author: XYZ
Date: 26-09-26
Description:
Toggle the case of each character in a string. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("Enter a string: \n");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }

    printf("String after toggling case = %s\n", str);

    return 0;
}
