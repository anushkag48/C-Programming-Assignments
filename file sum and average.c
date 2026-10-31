/* Author: XYZ
Date: 31-10-26
Description:
Q129: Read integers from numbers.txt separated by spaces, compute sum and average.
Sample Test Case:
Input: 10 20 30 40 50
Output:
Sum = 150
Average = 30.00
*/

#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening numbers.txt\n");
        return 1;
    }

    int val, count = 0;
    long long sum = 0;

    while (fscanf(fp, "%d", &val) == 1)
    {
        sum += val;
        count++;
    }

    fclose(fp);

    if (count > 0)
    {
        printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    }
    else
    {
        printf("Sum = 0\nAverage = 0.00\n");
    }
    return 0;
}
