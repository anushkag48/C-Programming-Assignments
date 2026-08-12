
/* Author: XYZ
 Date: 06-08-26
 Description:
 calc the sum of two numbers*/
#include <stdio.h>
#define PI 3.141
int main(void)
{
    float r=0,area,circum;
    printf("enter the radius of a circle\n");
    scanf("%f",&r);
    area = PI * r * r;
    circum = 2 * PI * r;
    printf("area of circle: %0.1f\n", area);
    printf("scircum of circle: %0.1f\n", circum);
   // return 0;
}
