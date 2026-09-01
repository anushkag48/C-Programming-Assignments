/* Author: XYZ
 Date: 06-08-26
 Description:
 to classify a triangle*/
#include <stdio.h>

int main(void)
{
   int a, b, c;
    printf("enter the three sides of a triangle\n");
    scanf("%d %d %d",&a, &b, &c);
    if ( a == b && b == c)
    {
        printf("Equilateral triangle.\n");
    }
    else if ( a == b || b == c || c == a)
    {
        printf("Isosceles triangle.\n");
    }
    else if ( a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a*a)
    {
        printf("Right-angled triangle.\n");
    }
    else
    {
        printf("Scalene triangle.\n");
    }
   // return 0;
}
