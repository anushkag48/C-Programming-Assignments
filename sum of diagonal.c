/* Author: XYZ
Date: 24-09-26
Description:
Find the sum of the main diagonal elements of a square matrix. */

#include <stdio.h>

int main(void)
{
    int a[10][10], n, i, j, sum = 0;

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
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

