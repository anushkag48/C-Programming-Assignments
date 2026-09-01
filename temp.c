/* Author: XYZ
 Date: 08-08-26
 Description:
 calc the temp*/
#include <stdio.h>

int main(void)
{
    int C=0,F;
    printf("enter the temp in celsius\n");
    scanf("%d",&C);
    F = (C*1.8) + 32;
    printf("temp in fahrenheit = %d\n", F);
   // return 0;
}
