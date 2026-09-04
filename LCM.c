/* Author: XYZ
   Date: 04-09-26
   Description: Find the LCM of two numbers
*/

#include <stdio.h>

int main(void)
{
    int a, b, lcm;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    lcm = (a > b) ? a : b;

    while (lcm % a != 0 || lcm % b != 0)
    {
        lcm++;
    }

    printf("LCM = %d\n", lcm);

    return 0;
}
