/* Author: XYZ
Date: 26-09-26
Description:
Count the number of vowels and consonants in a string. */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, v = 0, c = 0;

    printf("Enter a sentence: \n");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u')
        {
            v++;
        }
        else 
        {
            c++;
        }

        i++;
    }

    printf("Number of vowels = %d\n", v);
    printf("Number of consonants = %d\n", c);

    return 0;
}

