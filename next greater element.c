/* Author: XYZ
Date: 08-10-26
Description:
Q106: Find the next greater element for each element in array (nested loop / brute force).
Sample Test Case:
Input: arr = [1, 3, 2, 4]
Output: 3, 4, 4, -1
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
        int next = -1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }
        printf("%d%s", next, (i == n - 1) ? "\n" : ", ");
    }
    return 0;
}
