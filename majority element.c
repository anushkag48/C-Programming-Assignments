/* Author: XYZ
Date: 07-10-26
Description:
Q105: Print the majority element appearing strictly more than n / 2 times, or -1.
Sample Test Case:
Input: nums = [3,2,3]
Output: 3
*/

#include <stdio.h>

int main(void)
{
    int n, i, count = 0, candidate = -1;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Boyer-Moore Voting Algorithm
    for (i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Verify candidate
    count = 0;
    for (i = 0; i < n; i++)
    {
        if (nums[i] == candidate) count++;
    }

    if (count > n / 2)
    {
        printf("%d\n", candidate);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
