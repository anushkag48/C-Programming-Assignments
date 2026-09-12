/* Author: XYZ
   Date: 06-09-26
   Description: Print a right-aligned reverse number pattern of 5 rows
*/

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
