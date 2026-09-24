/* Author: XYZ
   Date: 23-09-26
   Description: Add two matrices
*/

#include <stdio.h>

int main(void)
{
    int a[10][10], b[10][10], c[10][10];
    int  i,j, r=0,co =0;
    printf("Enter the number of rows: \n");
    scanf("%d", &r);
    printf("Enter the number of coloumns: \n");
    scanf("%d", &co);
    printf("Enter elements of first matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < co; j++)
        {
            scanf("%d", & a[i][j]);
        }
    }
    printf("Enter elements of second matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < co; j++)
        {
            scanf("%d", & b[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < co; j++)
        {
            c[i][j] = a[i][j]+ b[i][j];
        }
    }
    printf("Sum of the two matrices: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < co; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
