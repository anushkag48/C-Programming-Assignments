/* Author: XYZ
 Date: 09-09-26
 Description:
 to print an array*/
#include <stdio.h>

int main(void)
{
    int i, m[10], n, sum = 0;
    printf("enter number of elements \n");
    scanf("%d", &n);
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", & m[i]);
        sum = sum + m[i];
    }
    printf("sum of all elements = %d \n", sum);
    return 0;
}
