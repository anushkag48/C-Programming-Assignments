/* Author: XYZ
 Date: 09-09-26
 Description:
 to print an array*/
#include <stdio.h>

int main(void)
{
    int i, m[10], n, max, min;
    printf("enter number of elements \n");
    scanf("%d", &n);
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", & m[i]);
    }
    max = m[0];
    min = m[0];
    for(i=0;i<n;i++)
    {
        if ( m[i] > max)
        {
            max = m[i];
        }
        if ( m[i] < min)
        {
            min = m[i];
        }
    }
    printf("maximum number = %d \n", max);
    printf("min number = %d \n", min);
    return 0;
}
