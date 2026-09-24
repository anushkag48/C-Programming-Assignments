/* Author: XYZ
Date: 24-09-26
Description:
Find the sum of all elements in a matrix. */

#include <stdio.h>

int main(void)
{
    int a[10][10], rows, columns, i, j, sum = 0;

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
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}

