/* Author: XYZ
Date: 03-10-26
Description:
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
Print the first and last occurrence of the target and print the index of first and last occurrence.
Print -1, -1 if the target is not present.
Sample Test Case:
Input: nums = [5,7,7,8,8,10], target = 8
Output: 3,4
*/

#include <stdio.h>

int main(void)
{
    int n, target, i;
    int first = -1, last = -1;

    printf("Enter number of elements: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[n];
    printf("Enter sorted elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: \n");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1) first = i;
            last = i;
        }
    }

    if (first == -1)
    {
        printf("-1,-1\n");
    }
    else
    {
        printf("%d,%d\n", first, last);
    }
    return 0;
}
