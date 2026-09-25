/* Author: XYZ
   Date: 23-09-26
   Description: multiply two matrices
*/

#include <stdio.h>

int main(void)
{
    int a[10][10], b[10][10], c[10][10];
    int  i,k,j, r1=0,c1 =0, r2=0, c2=0;
    printf("Enter the number of rows of matrix a : \n");
    scanf("%d", &r1);
    printf("Enter the number of coloumns of matrix a : \n");
    scanf("%d", &c1);
    printf("Enter the number of rows of matrix b : \n");
    scanf("%d", &r2);
    printf("Enter the number of coloumns of matrix b : \n");
    scanf("%d", &c2);
    if( c1!= r2)
    {
        printf("multiplication not possible");
        return 0;
    }
    printf("Enter elements of first matrix: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", & a[i][j]);
        }
    }
    printf("Enter elements of second matrix: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", & b[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("product of the two matrices: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
