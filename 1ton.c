/* Author: XYZ
   Date: 01-09-26
   Description: Print numbers from 1 to n
*/

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d \n", i);
    }

    return 0;
}
