/* Author: XYZ
   Date: 16-09-26
   Description: Search for an element in a sorted array using binary search
*/

#include <stdio.h>

int main(void)
{
    int arr[100], n, i, search;
    int low, high, mid, found = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter the elements in sorted order: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: \n");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            found = 1;
            printf("Element found = %d\n", arr[mid]);
            break;
        }
        else if (search < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}
