
/* Author: XYZ
 Date: 09-09-26
 Description:
 to print an array*/
#include <stdio.h>

int main(void)
{
    int i, m[10], n, o=0, e=0;
    printf("enter number of elements \n");
    scanf("%d", &n);
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", & m[i]);
    }
    for(i=0;i<n;i++)
    {
        if ( m[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("number of Even numbers = %d \n", e);
    printf("number of Odd numbers = %d \n", o);
    return 0;
}



