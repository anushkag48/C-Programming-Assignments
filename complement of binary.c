/* Author: XYZ
   Date: 04-09-26
   Description: Find and print the 1's complement of a binary number
*/

#include <stdio.h>

int main(void)
{
    int n, digit, complement = 0, place = 1;

    printf("Enter a binary number: \n");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
        {
            digit = 1;
        }
        else
        {
            digit = 0;
        }

        complement = complement + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement = \n");

    if (complement < place / 10)
    {
        printf("0");
    }

    printf("%d\n", complement);

    return 0;
}
