/* Author: XYZ
   Date: 06-09-26
   Description: Swap the first and last digit of a number
*/

#include <stdio.h>

int main(void)
{
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: \n");
    scanf("%d", &n);

    last = n % 10;

    digits = n;
    power = 1;

    while (digits >= 10)
    {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", result);

    return 0;
}
