/* Author: XYZ
   Date: 16-09-26
   Description: Find the second largest element in an array
*/

#include <stdio.h>

int main(void)
{
    int arr[100], n, i;
    int largest, second_largest;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];
    second_largest = arr[1];

    if (second_largest > largest)
    {
        int temp = largest;
        largest = second_largest;
        second_largest = temp;
    }

    for (i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    printf("Second largest element = %d\n", second_largest);

    return 0;
}
