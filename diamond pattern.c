/* Author: XYZ
 Date: 02-09-26
 Description:
 to print a diamond pattern*/
#include <stdio.h>
int main(void)
{
    int i,j,n;
    printf("enter the number of rows\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
        for(i=n-1;i>=1;i--)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
                for(j=1;j<=2*i-1;j++)
                {
                    printf("*");
                }
        printf("\n");
    }
    // return 0;
}
