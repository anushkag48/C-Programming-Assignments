/* Author: XYZ
Date: 18-10-26
Description:
Q116: Find two distinct indices i and j such that nums[i] + nums[j] == target.
Sample Test Case:
Input: nums = [2,7,11,15], target = 9
Output: 0 1
*/

#include <stdio.h>

int main(void)
{
    int n, target, i, j, found = 0;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n < 2) return 0;

    int nums[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: \n");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
    {
        printf("-1 -1\n");
    }
    return 0;
}
