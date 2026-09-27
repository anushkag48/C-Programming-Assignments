/* Author: XYZ
Date: 27-09-26
Description:
Reverse each word in a sentence without changing the word order. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, start = 0;

    printf("Enter a sentence: \n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            int j;

            for (j = i - 1; j >= start; j--)
            {
                printf("%c", str[j]);
            }

            if (str[i] == ' ')
            {
                printf(" ");
            }

            start = i + 1;
        }

        i++;
    }

    return 0;
}
