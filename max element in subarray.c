/* Author: XYZ
Date: 12-10-26
Description:
Q110: Find maximum element in each subarray of size k. Space separated.
Sample Test Case:
Input: arr = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3
Output: 3 3 4 5 5 5 6
*/

#include <stdio.h>

int main(void)
{
    int n, k, i, j;

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

    for (i = 0; i <= n - k; i++)
    {
        int maxVal = arr[i];
        for (j = i + 1; j < i + k; j++)
        {
            if (arr[j] > maxVal)
            {
                maxVal = arr[j];
            }
        }
        printf("%d%s", maxVal, (i == n - k) ? "\n" : " ");
    }
    return 0;
}
