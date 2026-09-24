/* Author: XYZ
Date: 24-09-26
Description:
Rotate an array to the right by k positions. */

#include <stdio.h>

int main(void)
{
    int a[100], n, k, i, j, temp;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of positions to rotate: \n");
    scanf("%d", &k);

    k = k % n;

    for (j = 0; j < k; j++)
    {
        temp = a[n - 1];

        for (i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = temp;
    }

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

