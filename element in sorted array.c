/* Author: XYZ
   Date: 16-09-26
   Description: Insert an element into a sorted array at the appropriate position
*/

#include <stdio.h>

int main(void)
{
    int arr[100], n, i, element, position;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter the elements in sorted order: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: \n");
    scanf("%d", &element);

    position = n;

    for (i = 0; i < n; i++)
    {
        if (element < arr[i])
        {
            position = i;
            break;
        }
    }

    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    n++;

    printf("Array after insertion: \n   ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
