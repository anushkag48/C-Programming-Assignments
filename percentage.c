/* Author: XYZ
 Date: 01-09-26
 Description:
 to find the roots of an equation */
#include <stdio.h>

int main(void)
{
    float percentage;

    printf("Enter percentage: \n");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
