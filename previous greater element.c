/* Author: XYZ
Date: 09-10-26
Description:
Q107: Find the previous greater element for each element in array (nested loop / brute force).
Sample Test Case:
Input: arr = [1, 3, 2, 4]
Output: -1, -1, 3, -1
*/

#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        int prev = -1;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                prev = arr[j];
                break;
            }
        }
        printf("%d%s", prev, (i == n - 1) ? "\n" : ", ");
    }
    return 0;
}
