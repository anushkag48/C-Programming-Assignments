/* Author: XYZ
Date: 14-10-26
Description:
Q112: Maximum sum of contiguous subarray using Kadane's algorithm.
Sample Test Case:
Input: arr = [2, 3, -8, 7, -1, 2, 3]
Output: 11
*/

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long maxSoFar = arr[0];
    long long currMax = arr[0];

    for (i = 1; i < n; i++)
    {
        currMax = (arr[i] > currMax + arr[i]) ? arr[i] : currMax + arr[i];
        if (currMax > maxSoFar)
        {
            maxSoFar = currMax;
        }
    }

    printf("%lld\n", maxSoFar);
    return 0;
}
