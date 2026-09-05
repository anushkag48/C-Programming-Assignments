/* Author: XYZ
 Date: 06-08-26
 Description:
 calc the Sum, Pro, Diff, Qou*/
#include <stdio.h>

int main(void)
{
 
    int a=0,b=0,Sum,Pro,Diff;
    float Qou;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    Sum = a + b;
    Pro = a*b;
    Diff = a-b;
    Qou = a/b;
    printf("Sum = %d\n", Sum);
    printf("Difference = %d\n", Diff);
    printf("Product = %d\n", Pro);
    printf("Qoutient: %0.2f\n", Qou);
    // return 0;
}

