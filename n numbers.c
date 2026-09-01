/* Author: XYZ
 Date: 09-08-26
 Description:
 calc the Sum of two numbers*/
#include <stdio.h>

int main(void)
{
    int i, n=0,Sum=0;
    printf("enter how many numbers\n");
    scanf("%d",&n);
    for( i=1; i<=n; i++)
    {
        Sum = Sum + i;
    }
    printf("Sum= %d\n", Sum);
   // return 0;
}
