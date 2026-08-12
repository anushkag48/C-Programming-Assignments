
/* Author: XYZ
 Date: 06-08-26
 Description:
 calc the SI*/
#include <stdio.h>

int main(void)
{
    int a=0,b=0,c;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("after swapping:\n");
    printf("first number = %d\n",a);
    printf("second number = %d\n",b);
   // return 0;
}
