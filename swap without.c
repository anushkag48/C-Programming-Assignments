/* Author: XYZ
 Date: 09-08-26
 Description:
 calc the SI*/
#include <stdio.h>

int main(void)
{
    int a=0,b=0;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping:\n");
    printf("first number = %d\n",a);
    printf("second number = %d\n",b);
   // return 0;
}
