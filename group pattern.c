/* Author: XYZ
   Date: 12-09-26
   Description: Print groups of stars with different numbers of stars
*/

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        if (i == 1)
        {
            for (j = 1; j <= 4; j++)
            {
                printf("*\n");
            }
        }
        else if (i == 2)
        {
            for (j = 1; j <= 5; j++)
            {
                printf("*\n");
            }
        }
        else if (i == 3)
        {
            for (j = 1; j <= 3; j++)
            {
                printf("*\n");
            }
        }
        else
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
