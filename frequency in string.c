/* Author: XYZ
Date: 26-09-26
Description:
Count the frequency of a given character in a string. */

#include <stdio.h>

int main(void)
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: \n");
    scanf("%s", str);
    printf("Enter the character to find: \n");
    scanf(" %c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }

        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
