/* Author: XYZ
   Date: 14-09-26
   Description: Reverse an array without using extra space
*/

#include <stdio.h>

int main(void)
{
    int arr[100], n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    i = 0;
    j = n - 1;

    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    printf("Reversed array: \n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}
