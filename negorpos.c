/* Author: XYZ
 Date: 11-08-26
 Description:
 to find if the number is negative or zero or positive*/
#include <stdio.h>
int main(void)
{
    int n=0;
    printf("enter the number\n");
    scanf("%d",&n);
    if (n >0)
    {
        printf("The number is positive\n");
}
    else if (n<0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is zero\n");
    }
   // return 0;
}
