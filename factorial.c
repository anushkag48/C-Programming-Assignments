/* Author: XYZ
 Date: 02-09-26
 Description:
 to calculate the factorial of input numbers*/
#include <stdio.h>
int main(void)
{
    int n,i,f=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        f = f*i;
    }
    printf("Factorial is = %d\n",f);
    // return 0;
}
