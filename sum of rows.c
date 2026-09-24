/* Author: XYZ
Date: 24-09-26
Description:
Find the sum of each row of a matrix and store the sums in an array. */

#include <stdio.h>

int main(void)
{
    int a[10][10], sum[10];
    int rows, columns, i, j;

    printf("Enter the number of rows: \n");
    scanf("%d", &rows);

    printf("Enter the number of columns: \n");
    scanf("%d", &columns);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for (j = 0; j < columns; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for (i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}

