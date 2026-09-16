/* Author: XYZ
   Date: 16-09-26
   Description: Delete an element from an array at a given position
*/

#include <stdio.h>

int main(void)
{
    int arr[100], n, i, position;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to delete: \n");
    scanf("%d", &position);

    position = position - 1;

    for (i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
