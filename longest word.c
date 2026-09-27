/* Author: XYZ
Date: 27-09-26
Description:
Find the longest word in a sentence. */

#include <stdio.h>

int main(void)
{
    char str[100], longest[100];
    int i = 0, length = 0, maxLength = 0, j = 0;

    printf("Enter a sentence: \n ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            length++;
        }
        else
        {
            if (length > maxLength)
            {
                maxLength = length;

                for (j = 0; j < length; j++)
                {
                    longest[j] = str[i - length + j];
                }

                longest[length] = '\0';
            }

            length = 0;
        }

        i++;
    }

    printf("Longest word = %s\n", longest);

    return 0;
}
