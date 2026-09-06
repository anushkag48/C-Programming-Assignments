/* Author: XYZ
   Date: 06-09-26
   Description: Print a decreasing star pattern with spaces
*/

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
