/* Author: XYZ
 Date: 06-08-26
 Description:
 to find if the number is even or odd*/
#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
    {
        printf(" %d is the largest number\n",a);
}
    else if (b>=a && b>=c)
    {
       
            printf("%d is the largest number\n",b);
    }
    else{
        printf("%d is the largest number\n",c);
    }
   // return 0;
}
