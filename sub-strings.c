/* Author: XYZ
Date: 02-10-26
Description:
Q100: Print all sub-strings of a string.
Sample Test Case:
Input: abc
Output: a,ab,abc,b,bc,c
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int i, j, k, len, first = 1;

    printf("Enter a string: \n");
    if (scanf("%99s", str) == 1)
    {
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            for (j = i; j < len; j++)
            {
                if (!first)
                {
                    printf(",");
                }
                for (k = i; k <= j; k++)
                {
                    putchar(str[k]);
                }
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
