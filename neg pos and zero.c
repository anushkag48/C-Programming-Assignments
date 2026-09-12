/* Author: XYZ
 Date: 09-09-26
 Description:
 to print an array*/
#include <stdio.h>

int main(void)
{
    int i, m[10], n, p=0, z=0,e=0;
    printf("enter number of elements \n");
    scanf("%d", &n);
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", & m[i]);
    }
    for(i=0;i<n;i++)
    {
        if ( m[i]>0)
        {
            p++;
        }
        else if ( m[i]<0)
        {
            e++;
        }
        else
        {
            z++;
        }
    }
    printf("number of negative numbers = %d \n", e);
    printf("number of positive numbers = %d \n", p);
    printf("number of zeros = %d \n", z);    return 0;
}
