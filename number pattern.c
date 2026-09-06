/* Author: XYZ
 Date: 03-09-26
 Description:
 to print a number triangle pattern*/
#include <stdio.h>
int main(void)
{
    int i,j,n;
    printf("enter the number of rows\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    // return 0;
}
