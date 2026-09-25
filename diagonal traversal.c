/* Author: XYZ
Date: 25-09-26
Description:
Perform diagonal traversal of a matrix. */

#include <stdio.h>

int main(void)
{
    int a[10][10], rows, columns, i, j, k;

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

    printf("Diagonal traversal:\n");

    for (k = 0; k < rows + columns - 1; k++)
    {
        for (i = 0; i < rows; i++)
        {
            j = k - i;

            if (j >= 0 && j < columns)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}

