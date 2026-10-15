/* Author: XYZ
Date: 15-10-26
Description:
Q113: Find kth smallest element in array.
Sample Test Case:
Input: arr = [7, 10, 4, 3, 20, 15], k = 3
Output: 7
*/

#include <stdio.h>

int main(void)
{
    int n, k, i, j, temp;

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

    // Simple bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d\n", arr[k - 1]);
    return 0;
}
