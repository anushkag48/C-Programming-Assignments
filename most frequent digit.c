/* Author: XYZ
   Date: 15-09-26
   Description: Find the digit that occurs the most times in an integer number
*/

#include <stdio.h>

int main(void)
{
    int n, digit, i;
    int count[10] = {0};
    int max = 0, most_frequent = 0;

    printf("Enter an integer: \n");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            most_frequent = i;
        }
    }

    printf("Digit occurring the most = %d\n", most_frequent);

    return 0;
}
