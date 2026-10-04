/* Author: XYZ
Date: 04-10-26
Description:
Q102: Take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x (ceil of x). If no such element exists, print -1.
Sample Test Case:
Input: arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output: 2
*/

#include <stdio.h>

int main(void)
{
    int n, x, i, ans = -1;

    printf("Enter number of elements: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter sorted elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: \n");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);
    return 0;
}
