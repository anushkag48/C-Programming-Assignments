/* Author: XYZ
   Date: 04-09-26
   Description: Calculate the sum of digits of a number
*/

#include <stdio.h>

int main(void)
{
    int n, digit, sum = 0;

    printf("Enter a number: \n");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
