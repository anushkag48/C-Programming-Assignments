/* Author: XYZ
   Date: 04-09-26
   Description: Find the HCF (GCD) of two numbers
*/

#include <stdio.h>

int main(void)
{
    int a, b, remainder;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("HCF (GCD) = %d\n", a);

    return 0;
}
