/* Author: XYZ
Date: 19-10-26
Description:
Q117: Merge two sorted arrays into a sorted array.
Sample Test Case:
Input: nums1 = [2,7,11,15], nums2 = [4,8,10]
Output: 2 4 7 8 10 11 15
*/

#include <stdio.h>

int main(void)
{
    int m, n, i, j, k;

    printf("Enter size of first array: \n");
    if (scanf("%d", &m) != 1 || m < 0) return 0;
    int nums1[m];
    printf("Enter elements of first array: \n");
    for (i = 0; i < m; i++) scanf("%d", &nums1[i]);

    printf("Enter size of second array: \n");
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    int nums2[n];
    printf("Enter elements of second array: \n");
    for (i = 0; i < n; i++) scanf("%d", &nums2[i]);

    int merged[m + n];
    i = 0; j = 0; k = 0;

    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            merged[k++] = nums1[i++];
        }
        else
        {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m) merged[k++] = nums1[i++];
    while (j < n) merged[k++] = nums2[j++];

    for (i = 0; i < m + n; i++)
    {
        printf("%d%s", merged[i], (i == m + n - 1) ? "\n" : " ");
    }
    return 0;
}
