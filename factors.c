/* Author: XYZ
   Date: 04-09-26
   Description: Print all factors of a given number
*/

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter a number: \n");
    scanf("%d", &n);

    printf("Factors of %d are: \n", n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}
