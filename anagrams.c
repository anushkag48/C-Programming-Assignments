/* Author: XYZ
Date: 27-09-26
Description:
Check whether two strings are anagrams of each other. */

#include <stdio.h>

int main(void)
{
    char str1[100], str2[100];
    int i, j, count1, count2, anagram = 1;

    printf("Enter the first string: \n");
    scanf("%s", str1);

    printf("Enter the second string: \n");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        count1 = 0;
        count2 = 0;

        for (j = 0; str1[j] != '\0'; j++)
        {
            if (str1[j] == str1[i])
            {
                count1++;
            }
        }

        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str2[j] == str1[i])
            {
                count2++;
            }
        }

        if (count1 != count2)
        {
            anagram = 0;
            break;
        }
    }

    if (anagram == 1)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
