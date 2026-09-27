/* Author: XYZ
Date: 27-09-26
Description:
Check if one string is a rotation of another. */

#include <stdio.h>

int main(void)
{
    char str1[100], str2[100], str3[200];
    int i, j, length1 = 0, length2 = 0, match, rotation = 0;

    printf("Enter the first string: \n");
    scanf("%s", str1);

    printf("Enter the second string: \n");
    scanf("%s", str2);

    while (str1[length1] != '\0')
    {
        length1++;
    }

    while (str2[length2] != '\0')
    {
        length2++;
    }

    if (length1 == length2)
    {
        for (i = 0; i < length1; i++)
        {
            str3[i] = str1[i];
        }

        for (i = 0; i < length1; i++)
        {
            str3[length1 + i] = str1[i];
        }

        str3[2 * length1] = '\0';

        for (i = 0; i < length1; i++)
        {
            match = 1;

            for (j = 0; j < length1; j++)
            {
                if (str3[i + j] != str2[j])
                {
                    match = 0;
                    break;
                }
            }

            if (match == 1)
            {
                rotation = 1;
                break;
            }
        }
    }

    if (rotation == 1)
    {
        printf("The strings are rotations of each other.\n");
    }
    else
    {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}
