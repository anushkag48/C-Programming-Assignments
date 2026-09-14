/* Author: XYZ
   Date: 14-09-26
   Description: Search for an element in an array using linear search
*/

#include <stdio.h>

int main(void)
{
    int arr[100], n, i, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            printf("Element found = %d\n", arr[i]);
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Element not found\n");
                }

                return 0;
            }
