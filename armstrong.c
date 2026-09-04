/* Author: XYZ
 Date: 03-09-26
 Description:
 to check if the number is armstrong number or not*/
#include <stdio.h>
int main(void)
{
    int n,ori,sum=0,rem;
    printf("Enter a number\n");
    scanf("%d",&n);
    ori = n;
    while(n>0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n/10;
    }
        if (sum == ori)
        {
            printf("it is an armstrong number\n");
    }
    else
    {
        printf("it is not an armstrong number\n");
    }
    // return 0;
}
