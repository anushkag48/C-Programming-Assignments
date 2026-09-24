/* Author: XYZ
Date: 24-09-26
Description:
Check whether the elements on the main diagonal of a matrix are distinct. */

#include <stdio.h>

int main(void)
{
    int a[10][10], n, i, j, distinct = 1;

    printf("Enter the order of the matrix: \n");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
        {
            break;
        }
    }

    if (distinct == 1)
    {
        printf("The diagonal elements are distinct.\n");
    }
    else
    {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0;
}

