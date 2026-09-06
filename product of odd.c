/* Author: XYZ
   Date: 04-09-26
   Description: Calculate the product of odd digits of a number
*/

#include <stdio.h>

int main(void)
{
    int n, digit, product = 1;

    printf("Enter a number: \n");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
        }

        n = n / 10;
    }

    printf("Product of odd digits = %d\n", product);

    return 0;
}
