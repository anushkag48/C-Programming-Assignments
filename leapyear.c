/* Author: XYZ
 Date: 06-08-26
 Description:
 to find if the year is leap year or not*/
#include <stdio.h>

int main(void)
{
    int year=0;
    printf("enter a year\n");
    scanf("%d",& year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("The year is a leap year\n");
}
    else
    {
        printf("The year is not a leap year\n");
    }
   // return 0;
}
