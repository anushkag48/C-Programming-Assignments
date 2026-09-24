/* Author: XYZ
Date: 24-09-26
Description:
Read and print the elements of a matrix. */

#include <stdio.h>

int main(void)
{
    int a[10][10], rows, columns, i, j;

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

    printf("The matrix is:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}

