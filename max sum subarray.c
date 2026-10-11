/* Author: XYZ
Date: 11-10-26
Description:
Q109: Print maximum sum of all subarrays of size k.
Sample Test Case:
Input: arr = [100, 200, 300, 400], k = 2
Output: 700
*/

#include <stdio.h>

int main(void)
{
    int n, k, i;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: \n");
    scanf("%d", &k);

    if (k > n || k <= 0) return 0;

    long long currentSum = 0;
    for (i = 0; i < k; i++)
    {
        currentSum += arr[i];
    }

    long long maxSum = currentSum;
    for (i = k; i < n; i++)
    {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("%lld\n", maxSum);
    return 0;
}
