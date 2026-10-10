/* Author: XYZ
Date: 10-10-26
Description:
Q108: Array answer where answer[i] is product of all elements except nums[i].
Sample Test Case:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]
*/

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int left[n], right[n];
    left[0] = 1;
    for (i = 1; i < n; i++)
    {
        left[i] = left[i - 1] * nums[i - 1];
    }

    right[n - 1] = 1;
    for (i = n - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * nums[i + 1];
    }

    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d%s", left[i] * right[i], (i == n - 1) ? "]\n" : ",");
    }
    return 0;
}
