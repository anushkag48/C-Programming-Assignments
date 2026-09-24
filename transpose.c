/* Author: XYZ
Date: 24-09-26
Description:
Find the transpose of a matrix. */

#include <stdio.h>

int main(void)
{
    int a[10][10], transpose[10][10];
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
        for (j = 0; j < columns; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");

    for (i = 0; i < columns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

    return 0;
}

