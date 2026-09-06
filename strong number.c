/* Author: XYZ
   Date: 06-09-26
   Description: Check whether a number is a strong number
*/

#include <stdio.h>

int main(void)
{
    int n, original, digit, factorial, sum = 0, i;

    printf("Enter a number: \n");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;

        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        n = n / 10;
    }

    if (sum == original)
    {
        printf("%d is a strong number\n", original);
    }
    else
    {
        printf("%d is not a strong number\n", original);
    }

    return 0;
}
